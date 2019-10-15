/*
* HeartRates.h
*
* Version information v0.1
* Author: Dr. Effirul Ramlan
* Date: 09/10/2019
* Description: HeartRates Class
* Copyright notice
*/

#pragma once
#include <iostream>
#include <string>
#include <ctime>

class HeartRates {
private:
	std::string firstName_;
	std::string lastName_;
	int dateDay_;
	int dateMonth_;
	int dateYear_;
	int age_;

public:
	HeartRates(std::string fname, std::string lname, int dday, int dmonth, int dyear, int age);
	void SetFirstName(std::string fname);
	std::string GetFirstName() const;
	void SetLastName(std::string lname);
	std::string GetLastName() const;
	void SetDateDay(int dday);
	int GetDateDay() const;
	void SetDateMonth(int dmonth);
	int GetDateMonth() const;
	void SetDateYear(int dyear);
	int GetDateYear() const;
	int CalculateYear();
	int CalculateMaxRates();
	std::string CalculateRangeRates();
};