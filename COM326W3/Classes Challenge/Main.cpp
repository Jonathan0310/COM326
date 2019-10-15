/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Driver to test the student class
* Copyright notice
*/

#include <iostream>
#include "Student.h"

using namespace std;

int main() {

	Student stu1;
	stu1.SetCourse("Music theory");
	stu1.SetName("Billy Bragg");
	stu1.SetRegistrationID("B0000000");
	stu1.SetYearofStudy(3);
	stu1.SetModuleOneMark(57);
	stu1.SetModuleTwoMark(78);
	stu1.SetModuleThreeMark(69);

	stu1.ToString();
	cout << "\n" << "Classification: " << stu1.CalculateClassification() << endl;

	return 0;
}