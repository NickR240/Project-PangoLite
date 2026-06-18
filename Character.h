#pragma once

#include <string>

class Character
{
public:
    Character(
        const std::string& name,
        int health,
        int attackPower,
        int defense
    );

    virtual ~Character() = default;

    void takeDamage(int damage);
    void heal(int amount);

    bool isDefeated() const;

    const std::string& getName() const;
    int getHealth() const;
    int getAttackPower() const;
    int getDefense() const;

protected:
    std::string name_;
    int health_;
    int maxHealth_;
    int attackPower_;
    int defense_;
};