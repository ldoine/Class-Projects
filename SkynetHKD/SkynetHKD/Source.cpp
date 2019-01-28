#include <ctime>
#include <iostream>
#include <cstdlib>
#include <random>
#include <string>
using namespace std;



int main() {
	//This shows the size of our grid.
	int highestNum = 64;
	int lowestNum = 1;
	//Generates seed of random
	srand(time(0) - 64);
	//Generates a random number
	int number = ((rand() % 64) + 1);

	//This displays a welcome message to the user
	cout << "Welcome to Project Skynet: HK - Aerial drone \n";
	system("pause");
	cout << "\n";

	while (highestNum >= lowestNum) {
		int scan = ((highestNum - lowestNum) / 2) + lowestNum;
		cout << "Location " << scan << " has been scanned \n";


		//Finds out if a target is in the upper section
		if (scan > number) {
			highestNum = highestNum - scan;
			cout << "The randomly selected number is in the lower sector.\n ";
			cout << "Scanning again.\n";
			system("pause");
			cout << "\n";
		}
		//If it is not in that section tells the location of the enemy and scans again
		else if (scan = number) {
			cout << "Enemy located at location " << scan << ". Starting up HK protocol...." << "\n\n";
			system("pause");
			cout << "\n";
			//returns or it stops the program
			return 0;
		}
	}
	//returns or stops the program
	return 0;	
}