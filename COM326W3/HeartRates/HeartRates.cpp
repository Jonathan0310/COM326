/*
* HeartRates.cpp
*
* Version information v0.1
* Author: Dr. Effirul Ramlan
* Date: 09/10/2019
* Description: Function definition for HeartRates Class
* Copyright notice
*/

#include "HeartRates.h"

HeartRates::HeartRates(std::string fname, std::string lname, int dday, int dmonth, int dyear, int age)
	: firstName_{ fname }, lastName_{ lname }, dateDay_{ dday }, dateMonth_{ dmonth }, dateYear_{ dyear }, age_{ age }
{
	
};

void HeartRates::SetFirstName(std::string fname) {
	firstName_ = fname;
}

std::string HeartRates::GetFirstName() const {
	return firstName_;
}

void HeartRates::SetLastName(std::string lname) {
	lastName_ = lname;
}

std::string HeartRates::GetLastName() const {
	return lastName_;
}

void HeartRates::SetDateDay(int dday) {
	dateDay_ = dday;
}

int HeartRates::GetDateDay() const {
	return dateDay_;
}

void HeartRates::SetDateMonth(int dmonth) {
	dateMonth_ = dmonth;
}

int HeartRates::GetDateMonth() const {
	return dateMonth_;
}

void HeartRates::SetDateYear(int dyear) {
	dateYear_ = dyear;
}

int HeartRates::GetDateYear() const {
	return dateYear_;
}

int HeartRates::CalculateYear() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int year = 1900 + newtime.tm_year;
	age_ = year - GetDateYear();
	return age_;
}

int HeartRates::CalculateMaxRates() {
	return (220 - age_);
}

std::string HeartRates::CalculateRangeRates() {
	int maxRates = CalculateMaxRates();
	int minRange = 50 * maxRates / 100;
	int maxRange = 85 * maxRates / 100;
	std::string strRange = "Minimum Range: " + std::to_string(minRange) + " with Maximum Range: " + std::to_string(maxRange) + "\n";
	return strRange;
}
