/*
* Student.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class definition .cpp file for the Student Class
* Copyright notice
*/

#include "Student.h"

Student::Student(std::string name, std::string registration, std::string course, int yearofStudy,
	int moduleMark1, int moduleMark2, int moduleMark3) : name_{ name }, registrstionID_{ registration }, course_{ course},
	yearofStudy_{ yearofStudy}, moduleOneMark_{ moduleMark1 }, moduleTwoMark_{ moduleMark2 }, moduleThreeMark_{ moduleMark3 }
{};

void Student::SetName(std::string name) {
	name_ = name;
}
std::string Student::GetName() const {
	return name_;
}

void Student::SetRegistrationID(std::string registrstionID) {
	registrstionID_ = registrstionID;
}
std::string Student::GetRegistrationID() const {
	return registrstionID_;
}

void Student::SetCourse(std::string course) {
	course_ = course;
}
std::string Student::GetCourse() const {
	return course_;
}

void Student::SetYearofStudy(int year) {
	yearofStudy_ = year;
}
int Student::GetYearofStudy() const {
	return yearofStudy_;
}

void Student::SetModuleOneMark(int mark) {
	moduleOneMark_ = mark;
}
int Student::GetModuleOneMark() const {
	return moduleOneMark_;
}

void Student::SetModuleTwoMark(int mark) {
	moduleTwoMark_ = mark;
}
int Student::GetModuleTwoMark() const {
	return moduleTwoMark_;
}

void Student::SetModuleThreeMark(int mark) {
	moduleThreeMark_ = mark;
}
int Student::GetModuleThreeMark() const {
	return moduleThreeMark_;
}

void Student::ToString() const {
	std::string output = name_ + " " + registrstionID_ + " " + course_ + " " + std::to_string(yearofStudy_) + " "
		+ std::to_string(moduleOneMark_) + " " + std::to_string(moduleTwoMark_) + " " + std::to_string(moduleThreeMark_) + "\n";
	//+yearofStudy_ + " " + moduleOneMark_ + " "	+ moduleTwoMark_ + " " + moduleThreeMark_;
	std::cout << output;
}

std::string Student::CalculateClassification() const {

	int average;

	average = (moduleOneMark_ + moduleTwoMark_ + moduleThreeMark_) / 3;
	if (average < 40) {
		return "fail";
	}
	else if (average >= 40 && average <= 49) {
		return "3rd class";
	}
	else if (average >= 50 && average <= 59) {
		return "2nd class";
	}
	else if (average >= 60 && average <= 69) {
		return "2-1";
	}
	else
		return "1st class";

}