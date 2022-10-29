#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}

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