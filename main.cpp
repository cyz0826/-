#include <iostream>
#include <ctime>
#include "Hero.h"
#include "Slm.h"
#include "SlmFactory.h"
#include "Shop.h"

using namespace std;

int main() {
    srand((unsigned)time(0));

    Hero hero("�i��", 100, 15, 5, 0);
    Slm slime = SlmFactory::cRandomSlm();

    cout << "�J��ĤH�G" << slime.getName() << " HP:" << slime.getHp() << endl;

    while (hero.isAlive() && slime.isAlive()) {
        hero.attackSlm(slime);
        cout << slime.getName() << " �Q�����A�Ѿl HP: " << slime.getHp() << endl;

        if (slime.isAlive()) {
            slime.atkHero(hero);
            cout << hero.getName() << " �Q�����A�Ѿl HP: " << hero.getHp() << endl;
        }
    }

    if (hero.isAlive()) {
        cout << "�ӧQ�I��o�����G" << slime.getCoin() << endl;
        hero.addGold(slime.getCoin());
    }
    else {
        cout << "�^���ѥ_..." << endl;
    }

    cout << "�^���Ѿl�����G" << hero.getGold() << endl;

    Shop shop("�����ө�", 1000);

    shop.displayItems();
    shop.buyPotion(hero);
    shop.buyWeapon(hero);

    return 0;
}