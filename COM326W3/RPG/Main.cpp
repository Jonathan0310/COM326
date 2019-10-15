// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Warrior.hpp"
#include "Archer.hpp"
#include "Wizard.hpp"

double GenerateRandomNumber();
bool Fight(Warrior w, Archer a);

int main()
{
	// Code for Challenge 3
	// This is commented out to include 'the fun stuffs'
	// default weapon initialisation based on character - to exclude class Weapon calls in main
	// calling default constructor 
	Warrior Aragon;
	Archer Legolas;
	Wizard Gandalf;

	// set the character profile
	Aragon.SetCharName("Aragon");
	Aragon.SetCharType("Ranger");
	Legolas.SetCharName("Legolas");
	Legolas.SetCharType("Elves");
	Gandalf.SetCharName("Gandalf");
	Gandalf.SetCharType("Old Man");

	// print details for character
	Aragon.PrintStatus();
	Legolas.PrintStatus();
	Gandalf.PrintStatus();
	std::cout << std::endl;

	// battle to the death between warrior and archer
	int ctrBattle = 1;
	int healthImpact;
	while (Aragon.GetCharHealth() > 0 && Legolas.GetCharHealth() > 0) {
		std::cout << "\n\nBATTLE: " << ctrBattle;
		if (Fight(Aragon, Legolas) == 1) {
			healthImpact = Legolas.GetCharHealth() - Aragon.GetDamageImpact();
			Legolas.SetCharHealth(healthImpact);
		}
		else {
			healthImpact = Aragon.GetCharHealth() - Legolas.GetDamageImpact();
			Aragon.SetCharHealth(healthImpact);
		}
		ctrBattle++;
		Aragon.PrintStatus();
		Legolas.PrintStatus();
	}
	
	return 0;
}

bool Fight(Warrior w, Archer a) {
	double randomNum = GenerateRandomNumber();
	if (randomNum < 0.5) {
		return true;
	}
	else {
		return false;
	}
}

double GenerateRandomNumber() {
	std::random_device rd; 
	std::mt19937 gen(rd()); 
	std::uniform_real_distribution<> dis(0, 1);
	double outcome = dis(gen);
	return outcome;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
