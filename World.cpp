#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}

class World {
	Creature creature;
	private:
		double chanceOfSpawn;
		int numberOfRolls;
	public:
		void createCreature() {}
		int getNumRolls() {return 0;}
		void setChanceOfSpawn (double x) {chanceOfSpawn = x;}
		void setNumOfRolls (int x) {numberOfRolls = x;}
};