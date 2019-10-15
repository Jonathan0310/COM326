/*
* Student.h
*
* Version information
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class declaration header file for the Student Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>

class Student {

	//Data members private
private:
	std::string name_;
	std::string registrstionID_;
	std::string course_;
	int yearofStudy_;
	int moduleOneMark_;
	int moduleTwoMark_;
	int moduleThreeMark_;

public:
	Student() = default; // default constructor, no declaration needed

	Student(std::string name, std::string registration, std::string course, int yearofStudy,
		int moduleMark1, int moduleMark2, int moduleMark3);

	void SetName(std::string name);
	std::string GetName() const;

	void SetRegistrationID(std::string registrstionID);
	std::string GetRegistrationID() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetYearofStudy(int year);
	int GetYearofStudy() const;

	void SetModuleOneMark(int mark);
	int GetModuleOneMark() const;

	void SetModuleTwoMark(int mark);
	int GetModuleTwoMark() const;

	void SetModuleThreeMark(int mark);
	int GetModuleThreeMark() const;

	void ToString() const;

	std::string Student::CalculateClassification() const;

};