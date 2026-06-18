#pragma once
#include "Character.h"
#include <string>
#include <vector>

class Player : public Character {
private:
    int gold;
    int level;
    int experience;
    std::vector<std::string> inventory;

public:
    Player();

    void setName(const std::string& newName);

    void printStats() const;

    void takeDamage(int damage);
    void heal(int amount);
    bool isAlive() const;

    int getGold() const;
    int getLevel() const;
    int getExperience() const;

    void addGold(int amount);
    bool spendGold(int amount);

    void addItem(const std::string& item);
    void printInventory() const;
};