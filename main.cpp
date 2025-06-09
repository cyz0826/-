#include <iostream>
#include <ctime>
#include "Hero.h"
#include "Slm.h"
#include "SlmFactory.h"
#include "Shop.h"

using namespace std;

void fight(Hero& hero) {
    Slm slime = SlmFactory::cRandomSlm();
    cout << "你遇到了 " << slime.getName() << "！ HP: " << slime.getHp() << endl;

    while (hero.isAlive() && slime.isAlive()) {
        cout << "\n你要做什麼？\n1. 攻擊\n2. 逃跑\n選擇: ";
        int action;
        cin >> action;

        if (action == 1) {
            hero.attackSlm(slime);
            cout << "你攻擊了 " << slime.getName() << "，對方剩餘 HP: " << slime.getHp() << endl;
        }
        else {
            cout << "你逃跑了！\n";
            return;
        }

        if (slime.isAlive()) {
            slime.atkHero(hero);
            cout << slime.getName() << " 攻擊你，你剩下 HP: " << hero.getHp() << endl;
        }
    }

    if (hero.isAlive()) {
        cout << "你打敗了 " << slime.getName() << "！獲得金幣：" << slime.getCoin() << endl;
        hero.addGold(slime.getCoin());
    }
    else {
        cout << "你被打倒了...\n";
    }
}

void showStatus(const Hero& hero) {
    cout << "\n=== 勇者狀態 ===" << endl;
    cout << "名稱: " << hero.getName() << endl;
    cout << "HP: " << hero.getHp() << "\tATK: " << hero.getAtk() << "\tDEF: " << hero.getDef() << endl;
    cout << "金幣: " << hero.getGold() << endl;
}

int main() {
    srand((unsigned)time(0));

    Hero hero("勇者", 100, 15, 5, 50);
    Shop shop("村莊商店", 1000);

    while (hero.isAlive()) {
        cout << "\n=== 主選單 ===" << endl;
        cout << "1. 出去打史萊姆" << endl;
        cout << "2. 進入商店" << endl;
        cout << "3. 查看狀態" << endl;
        cout << "4. 離開遊戲" << endl;
        cout << "請選擇操作: ";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            fight(hero);
            break;
        case 2:
            shop.displayItems();
            cout << "輸入購買選項 (1-3, 0 離開): ";
            int buy;
            cin >> buy;
            if (buy == 1) shop.buyPotion(hero);
            else if (buy == 2) shop.buyWeapon(hero);
            else if (buy == 3) shop.buyArmor(hero);
            break;
        case 3:
            showStatus(hero);
            break;
        case 4:
            cout << "感謝遊玩，再見！\n";
            return 0;
        default:
            cout << "無效選項，請重新輸入。\n";
            break;
        }
    }

    cout << "遊戲結束，勇者已倒下。\n";
    return 0;
}
