#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}

class Predator {
	Creature creature;
	private:
		double chanceOfSpawn;
		double chanceOfCatch;
	public:
		void spawn() {}
		void catchPrey() {}
		void setChanceOfSpawn (double x) {chanceOfSpawn = x;}
		void setChanceOfCatch (double x) {chanceOfCatch = x;}
};