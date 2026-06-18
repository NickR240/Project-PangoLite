#include "Character.h"
#include <algorithm>

Character::Character(
    const std::string& name,
    int health,
    int attackPower,
    int defense
)
    : name_(name),
    health_(health),
    maxHealth_(health),
    attackPower_(attackPower),
    defense_(defense)
{
}

void Character::takeDamage(int damage)
{
    if (damage <= 0)
    {
        return;
    }

    const int actualDamage = std::max(1, damage - defense_);
    health_ = std::max(0, health_ - actualDamage);
}

void Character::heal(int amount)
{
    if (amount <= 0)
    {
        return;
    }

    health_ = std::min(maxHealth_, health_ + amount);
}

bool Character::isDefeated() const
{
    return health_ <= 0;
}

const std::string& Character::getName() const
{
    return name_;
}

int Character::getHealth() const
{
    return health_;
}

int Character::getAttackPower() const
{
    return attackPower_;
}

int Character::getDefense() const
{
    return defense_;
}