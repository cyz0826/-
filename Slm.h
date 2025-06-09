#ifndef SLM_H
#define SLM_H

#include <iostream>
#include <string>
using namespace std;

class Hero;

class Slm {
private:
    string name;
    int hp;
    int atk;
    int def;
    int coin;

public:
    Slm();
    Slm(string name, int hp, int atk, int def, int coin);

    void atkHero(Hero& hero);
    void takeDamage(int);
    bool isAlive() const;

    string getName() const;
    int getDef() const;
    int getCoin() const;
    int getHp() const;
};

#endif