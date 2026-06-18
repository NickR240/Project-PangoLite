#include "Player.h"
#include <iostream>

//Constructor
Player::Player()
	: name("Player"), health(100), maxHealth(100), attack(10), defense(5), gold(0), level(1), experience(0)
{
}

//Getters and Setters
const std::string& Player::getName() const
{
	return name;
}
int Player::getHealth() const
{
	return health;
}
int Player::getMaxHelath() const
{
	return maxHealth;
}
int Player::getAttack() const
{
	return attack;
}
int Player::getDefense() const
{
	return defense;
}
int Player::getGold() const
{
	return gold;
}
int Player::getLevel() const
{
	return level;
}
int Player::getExperience() const
{
	return experience;
}