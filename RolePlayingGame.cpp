#include <iostream>
#include "RolePlayingGame.h"
#include "RandomNumberGenerator.h"

using namespace std;

RolePlayingGame::RolePlayingGame(unsigned int seed, unsigned int nrMon, unsigned int nrKits, unsigned int nrPotions, unsigned int boost, unsigned int mhealth)
{
    //initialize the dungeon to be empty
    this->dungeon.readInMaze("mazeExample.txt");     
    initializeCreatures();
    
    initializeHero(seed);
    
    initializeMonsters(seed, nrMon);
    
    initializeFirstAidKits(seed, nrKits, boost);  
 
    initializePotions(seed, nrPotions);
   
    this->maxHealth = mhealth;
}

RolePlayingGame::~RolePlayingGame()
{
    
}
    
bool RolePlayingGame::moveHero(const char direction)
{
    return false;
}
    
void RolePlayingGame::printBoard()
{
    
}
    
bool RolePlayingGame::heroIsDead()
{
    return false;
}
    
bool RolePlayingGame::allMonstersDead()
{
    return false;
}
    
void RolePlayingGame::removeDeadMonsters()
{
    
}
    
unsigned int RolePlayingGame::getNrMonsters() const
{
    return 1;
}
    
void RolePlayingGame::setNrMonsters(unsigned int n)
{
    
}
    
unsigned int RolePlayingGame::getNrFirstAidKits() const
{
    return 1;
}

void RolePlayingGame::setNrFirstAidKits(unsigned int f)
{
    
}
    
unsigned int RolePlayingGame::getNrPotions() const
{
    return 1;
}

void RolePlayingGame::setNrPotions(unsigned int p)
{
    
}

void RolePlayingGame::initializeCreatures()
{
	    
}

void RolePlayingGame::initializeMonsters(unsigned int seed, unsigned int numMon)
{
    
}
    
void RolePlayingGame::initializeFirstAidKits(unsigned int seed, unsigned int numKits, unsigned int boost)
{
    
}
    
void RolePlayingGame::initializePotions(unsigned int seed, unsigned int numPotions)
{
    
}
    
void RolePlayingGame::initializeHero(unsigned int seed)
{
	bool validSpace = false;

	while (validSpace==false) {
	
	RandomNumberGenerator ran(seed, this->dungeon.getWorldColumns()-2);
	row = ran.nextInt();

	RandomNumberGenerator ran2(seed, this->dungeon.getWorldColumns()-2);
	col = ran2.nextInt(); 

	char tempSquare = this->dungeon.getMazeSquare(); 

	if (tempSquare!=' ') {
	
			

	} else {

	} 

	}
}
        
vector<int> RolePlayingGame::locateCreature(Creature* creature)
{
    vector<int> temp;
    return temp;
}
