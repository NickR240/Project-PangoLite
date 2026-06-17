#include "Player.h"
#include <iostream>

Player::Player()
    : name("Hero"),
    health(100),
    maxHealth(100),
    attack(10),
    defense(5),
    gold(0),
    level(1),
    experience(0) {
}

int Player::getHealth() const {
    return health;

}
void createCharacter() {

	std::cout << "Enter your character's name: ";
	
	
}