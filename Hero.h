#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>
using namespace std;

class Slm;  // ´£«e«Å§i

class Hero {
private:
    string name;
    int hp;
    int atk;
    int def;
    int gold;

public:
    Hero();
    Hero(const string& name, int hp, int atk, int def, int gold);

    string getName() const;
    int getHp() const;
    int getAtk() const;
    int getDef() const;
    int getGold() const;

    void takeDamage(int dmg);
    void attackEnemy(int& enemyHp, int enemyDef);
    bool isAlive() const;
    void attackSlm(Slm& slm);

    void addGold(int amount);
    void spendGold(int amount);

    void heal(int amount);
    void upgradeAtk(int amount);
    void upgradeDef(int amount);
};

#endif