/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Effirul Ramlan
* Date: 09/10/2019
* Description: Main file for HeartRates Class Challenge
* Copyright notice
*/

#include "HeartRates.h"

using namespace std;

int main() {

	string firstName, lastName;
	int month, day, year;

	// get user input
	cout << "Please enter first and last name: ";
	cin >> firstName >> lastName;
	cout << "Please enter month, day, and year of birth: ";
	cin >> month >> day >> year;

	// create a HeartRates object
	HeartRates heartRates{ firstName, lastName, month, day, year, 0};

	// display user information
	cout << "First Name: " << heartRates.GetFirstName() << "\n";
	cout << "Last Name: " << heartRates.GetLastName() << "\n";
	cout << "Date of Birth: " << heartRates.GetDateMonth() << "/"
		<< heartRates.GetDateDay() << "/"
		<< heartRates.GetDateYear() << "\n";
	cout << "Age: " << heartRates.CalculateYear() << "\n";
	cout << "Maximum Heart Rate: " << heartRates.CalculateMaxRates() << "\n";
	cout << "Target Heart Rate = " << heartRates.CalculateRangeRates() << "\n";

	return 0;
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
