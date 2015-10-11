main.o:	Creature.o Dungeon.o RandomNumberGenerator.o RolePlayingGame.o main.cpp
	g++ Creature.o Dungeon.o RandomNumberGenerator.o RolePlayingGame.o main.cpp -o main.o

Creature.o: Creature.h Creature.cpp
	g++ -c Creature.cpp

Dungeon.o: Dungeon.h Dungeon.cpp
	g++ -c Dungeon.cpp

RandomNumberGenerator.o: RandomNumberGenerator.h RandomNumberGenerator.cpp
	g++ -c RandomNumberGenerator.cpp

RolePlayingGame.o: RolePlayingGame.h RolePlayingGame.cpp
	g++ -c RolePlayingGame.cpp 

run: 
	./main.o
