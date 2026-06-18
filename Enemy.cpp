#include "Enemy.h"

// Default constructor
Enemy::Enemy()
    : health_(100),
      attackPower_(10),
      defense_(5)
{
}

// Parameterized constructor
Enemy::Enemy(int health, int attackPower, int defense)
    : health_(health),
      attackPower_(attackPower),
      defense_(defense)
{
}

// Destructor
Enemy::~Enemy() = default;