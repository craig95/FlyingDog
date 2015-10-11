#include "Dungeon.h"

#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

Dungeon::Dungeon()
{
    worldRows = 0;
    worldColumns = 0;
    
    maze = new char*[worldColumns];
}
    
Dungeon::Dungeon(unsigned int rows, unsigned int col)
{
    worldRows = rows;
    worldColumns = col;
    
    maze = new char*[worldColumns];
}
    

Dungeon::Dungeon(string fileName)
{
    readInMaze(fileName);
}
    
Dungeon::~Dungeon()
{
    delete [] maze;
}

char Dungeon::getMazeSquare(unsigned int row, unsigned int col) const
{
    try {
        
        if (row>=worldRows || col>=worldColumns) {
            string exeptionString = "Invalid cell in dungeon. Exiting the game.";
            throw exeptionString;
        }
        
        return maze[row][col];
        
    } catch (string exeption) {
        cout << endl << exeption << endl;
        exit(0);
    }
}
    
unsigned int Dungeon::getWorldRows() const
{
    return worldRows;
}

void Dungeon::setWorldRows(unsigned int r)
{
    worldRows = r;
}
    
unsigned int Dungeon::getWorldColumns() const
{
    return worldColumns;
}

void Dungeon::setWorldColumns(unsigned int c)
{
    worldColumns = c;
}
    
void Dungeon::readInMaze(string fileName)
{
    ifstream mapFile;
    string tempLine;
    int j=0;

    try {
        mapFile.open(fileName.c_str());	
        if (!(mapFile.good())) {
            string exeptionString = "The file does not exist. Exiting the program.";
            throw exeptionString;
        }
        
	int tempRows, tempColumns;

        mapFile >> tempRows;
        mapFile >> tempColumns;

	if (tempRows!=worldRows || tempColumns!=worldColumns)
	{
		
		worldRows = tempRows;
		worldColumns = tempColumns;		

		delete[] maze;
		
	} else {
	
		for (int j=0; j<worldRows; j++)
			for (int i=0; i<worldColumns; i++)
				maze[j][i] = ' ';
	
	}

        maze = new char*[worldRows]();
        for (int i = 0; i <= worldRows; ++i) {
  		maze[i] = new char[worldColumns];
	}
        
        while (getline(mapFile, tempLine)) {
            for (int i=0; i<tempLine.length(); i++) {
                maze[j][i] = tempLine[i];
            }
            ++j;
        }
    } catch (string exeption) {
        cout << endl <<exeption << endl;
        exit(0);
    }
}
