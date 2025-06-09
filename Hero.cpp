#include "Hero.h"
#include "Slm.h"

Hero::Hero() : name("«iªÌ"), hp(100), atk(10), def(5), gold(0) {}

Hero::Hero(const string& name, int hp, int atk, int def, int gold)
    : name(name), hp(hp), atk(atk), def(def), gold(gold) {}

string Hero::getName() const { return name; }
int Hero::getHp() const { return hp; }
int Hero::getAtk() const { return atk; }
int Hero::getDef() const { return def; }
int Hero::getGold() const { return gold; }

void Hero::takeDamage(int dmg) {
    hp -= dmg;
    if (hp < 0) hp = 0;
}

void Hero::attackEnemy(int& enemyHp, int enemyDef) {
    int damage = atk - enemyDef;
    if (damage < 1) damage = 1;
    enemyHp -= damage;
    if (enemyHp < 0) enemyHp = 0;
}

bool Hero::isAlive() const {
    return hp > 0;
}

void Hero::attackSlm(Slm& slm) {
    slm.takeDamage(atk);
}

void Hero::addGold(int amount) {
    gold += amount;
}

void Hero::spendGold(int amount) {
    if (amount <= gold) gold -= amount;
}

void Hero::heal(int amount) {
    hp += amount;
    if (hp > 100) hp = 100;
}

void Hero::upgradeAtk(int amount) {
    atk += amount;
}

void Hero::upgradeDef(int amount) {
    def += amount;
}