#include <iostream>
#include <ctime>
#include "Hero.h"
#include "Slm.h"
#include "SlmFactory.h"
#include "Shop.h"

using namespace std;

int main() {
    srand((unsigned)time(0));

    Hero hero("勇者", 100, 15, 5, 0);
    Slm slime = SlmFactory::cRandomSlm();

    cout << "遇到敵人：" << slime.getName() << " HP:" << slime.getHp() << endl;

    while (hero.isAlive() && slime.isAlive()) {
        hero.attackSlm(slime);
        cout << slime.getName() << " 被攻擊，剩餘 HP: " << slime.getHp() << endl;

        if (slime.isAlive()) {
            slime.atkHero(hero);
            cout << hero.getName() << " 被攻擊，剩餘 HP: " << hero.getHp() << endl;
        }
    }

    if (hero.isAlive()) {
        cout << "勝利！獲得金幣：" << slime.getCoin() << endl;
        hero.addGold(slime.getCoin());
    }
    else {
        cout << "英雄敗北..." << endl;
    }

    cout << "英雄剩餘金幣：" << hero.getGold() << endl;

    Shop shop("村莊商店", 1000);

    shop.displayItems();
    shop.buyPotion(hero);
    shop.buyWeapon(hero);

    return 0;
}