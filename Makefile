
main: RolePlayingGame.o Dungeon.o Creature.o RandomNumberGenerator.o main.o
	g++ RolePlayingGame.o Dungeon.o Creature.o RandomNumberGenerator.o main.o -o main

main.o: RolePlayingGame.h main.cpp
	g++ -c main.cpp
	
RandomNumber.o: RandomNumberGenerator.h RandomNumberGenerator.cpp
	g++ -c RandomNumberGenerator.cpp
	
RolePlayingGame.o: Creature.h Dungeon.h RolePlayingGame.h RolePlayingGame.cpp
	g++ -c RolePlayingGame.cpp

Dungeon.o: Dungeon.h Dungeon.cpp
	g++ -c Dungeon.cpp
	
Creature.o: Creature.h Creature.cpp
	g++ -c Creature.cpp
	
run: main
	./main

