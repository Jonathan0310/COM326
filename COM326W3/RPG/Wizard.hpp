#pragma once
#include <iostream>
#include "Weapon.hpp"

class Wizard {
private:
	std::string charName_;
	std::string charType_;
	int health_;
	int level_;
	Weapon weapon_;

public:
	Wizard() {
		std::cout << "A Wizard was just born via the default constructor !!!\n\n";
		weapon_.SetWeaponType("Magic Staff");
		weapon_.SetWeaponDamage(35.0);
		weapon_.SetWeaponLevel(3);
		SetCharHealth(100);
		SetCharLevel(1);
	}

	Wizard(std::string cName, std::string cType, int cHealth, int cLevel, Weapon cWeapon)
		: charName_{ cName }, charType_{ cType }, health_{ cHealth }, level_{ cLevel }, weapon_{ cWeapon } {
		std::cout << "A Wizard was just born !!!\n\n";
		weapon_.SetWeaponType("Magic Staff");
		weapon_.SetWeaponDamage(35.0);
		weapon_.SetWeaponLevel(3);
	}

	void SetCharName(std::string cName) {
		charName_ = cName;
	}

	std::string GetCharName() const {
		return charName_;
	}

	void SetCharType(std::string cType) {
		charType_ = cType;
	}

	std::string GetCharType() const {
		return charType_;
	}

	void SetCharHealth(int cHealth) {
		health_ = cHealth;
	}

	int GetCharHealth() const {
		return health_;
	}

	void SetCharLevel(int cLevel) {
		level_ = cLevel;
	}

	int GetCharLevel() const {
		return level_;
	}

	float GetDamageImpact() const {
		float varD = weapon_.GetWeaponDamage() * weapon_.GetWeaponLevel();
		return varD;
	}

	void PrintStatus() {
		std::cout << "\n--- Wizard details ---\n";
		std::cout << "Name: " << GetCharName() << std::endl;
		std::cout << "Character Type: " << GetCharType() << std::endl;
		std::cout << "Health Level: " << GetCharHealth() << std::endl;
		std::cout << "Character Level: " << GetCharLevel() << std::endl;
		std::cout << "Weapon Specs: " << weapon_.GetWeaponType() << " Damage: " << weapon_.GetWeaponDamage() << " Level: " << weapon_.GetWeaponLevel() << std::endl;
	
		if (GetCharHealth() <= 0) {
			std::cout << "Argghh, I've been killed !!\n";
		}
	}
};
