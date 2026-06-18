#include "Player.h"
#include <iostream>

//Constructor
Player::Player()
	: Character("Player", 100, 10, 5), 
	  gold(0),
	  level(1),
	  experience(0)
{
}

//Getters and Setters. The others are supplied by the Character class.
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