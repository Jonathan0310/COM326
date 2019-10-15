#pragma once
#include <iostream>

class Weapon {
private:
	std::string wType_;
	float wDamage_;
	int wLevel_;

public:
	Weapon() {
		std::cout << "An awesome weapon has once more been crafted by master blacksmith Shane\n";
		std::cout << "via the default constructor\n\n";
		SetWeaponDamage(0.0);
		SetWeaponLevel(0);
	}

	Weapon(std::string wType, float wDamage, int wLevel)
		: wType_{ wType }, wDamage_{ wDamage }, wLevel_{ wLevel } {
		std::cout << "An awesome weapon has once more been crafted by master blacksmith Shane\n\n";
	}

	void SetWeaponType(std::string wType) {
		wType_ = wType;
	}

	std::string GetWeaponType() const {
		return wType_;
	}

	void SetWeaponDamage(float wDamage) {
		wDamage_ = wDamage;
	}

	float GetWeaponDamage() const {
		return wDamage_;
	}

	void SetWeaponLevel(int wLevel) {
		wLevel_ = wLevel;
	}

	int GetWeaponLevel() const {
		return wLevel_;
	}
};
