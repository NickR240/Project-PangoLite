#pragma once
#include "Character.h"

class Enemy : public Character {
public:
	Enemy();
	Enemy(int health, int attackPower, int defense);
	void takeDamage(int damage);
	bool isDefeated() const;
	int getHealth() const;
	int getAttackPower() const;
	int getDefense() const;

private:
	int health_;
	int attackPower_;
	int defense_;
	int experienceReward_;
};
