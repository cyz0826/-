#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <string>
using namespace std;

class Hero; 

class Shop {
private:
    string name;
    int spent;
    int total;

public:
    Shop();
    Shop(string shopName, int totalGold);

    void displayItems() const;
    void buyPotion(Hero& hero);
    void buyWeapon(Hero& hero);
    void buyArmor(Hero& hero);

    int getTotal() const;
    int getSpent() const;
};

#endif
