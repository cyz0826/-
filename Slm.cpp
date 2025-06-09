#include "Slm.h"
#include "Hero.h"

Slm::Slm() : name("µL¦W¥vµÜ©i"), hp(20), atk(5), def(2), coin(1) {}

Slm::Slm(string name, int hp, int atk, int def, int coin)
    : name(name), hp(hp), atk(atk), def(def), coin(coin) {}

void Slm::atkHero(Hero& hero) {
    int damage = atk - hero.getDef();
    if (damage < 1) damage = 1;
    hero.takeDamage(damage);
}

void Slm::takeDamage(int damage) {
    damage -= def;
    if (damage < 1) damage = 1;
    hp -= damage;
    if (hp < 0) hp = 0;
}

bool Slm::isAlive() const {
    return hp > 0;
}

string Slm::getName() const {
    return name;
}

int Slm::getDef() const {
    return def;
}

int Slm::getCoin() const {
    return coin;
}

int Slm::getHp() const {
    return hp;
}
