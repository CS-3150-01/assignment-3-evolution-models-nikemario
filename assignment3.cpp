#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}

class Predator {
	private:
		double chanceOfSpawn;
		double chanceOfCatch;
	public:
		void spawn() {}
		void catchPrey() {}
		void setChanceOfSpawn (double x) {chanceOfSpawn = x;}
		void setChanceOfCatch (double x) {chanceOfCatch = x;}
};

class World {
	private:
		double chanceOfSpawn;
		int numberOfRolls;
	public:
		void createCreature() {}
		int getNumRolls() {return 0;}
		void setChanceOfSpawn (double x) {chanceOfSpawn = x;}
		void setNumOfRolls (int x) {numberOfRolls = x;}
};

class Creature {
	private:
		World world;
		Predator predator;
		double chanceOfRep;
		double chanceOfDeath;
	public:
		void die() {}
		void reproduce() {}
		void setChanceOfRep (double x) {chanceOfRep = x;}
		void setChanceOfDeath (double x) {chanceOfDeath = x;}
};