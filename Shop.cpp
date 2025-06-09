#include "Shop.h"
#include "Hero.h" 

Shop::Shop() : name("冒險者商店"), spent(0), total(0) {}

Shop::Shop(string shopName, int totalGold) : name(shopName), spent(0), total(totalGold) {}

void Shop::displayItems() const {
    cout << "=== " << name << " 商品清單 ===" << endl;
    cout << "1. 回復藥水 (10 金幣): 回復 30 HP" << endl;
    cout << "2. 武器升級 (20 金幣): 攻擊 +3" << endl;
    cout << "3. 防具升級 (20 金幣): 防禦 +2" << endl;
}

void Shop::buyPotion(Hero& hero) {
    if (hero.getGold() >= 10) {
        hero.spendGold(10);
        hero.heal(30);
        spent += 10;
        cout << "你購買了一瓶回復藥水，恢復了 30 HP！" << endl;
    }
    else {
        cout << "你窮逼買不起回復藥水。" << endl;
    }
}

void Shop::buyWeapon(Hero& hero) {
    if (hero.getGold() >= 20) {
        hero.spendGold(20);
        hero.upgradeAtk(3);
        spent += 20;
        cout << "你購買了武器升級，攻擊力提升了！" << endl;
    }
    else {
        cout << "你窮逼買不起武器。" << endl;
    }
}

void Shop::buyArmor(Hero& hero) {
    if (hero.getGold() >= 20) {
        hero.spendGold(20);
        hero.upgradeDef(2);
        spent += 20;
        cout << "你購買了防具升級，防禦力提升了！" << endl;
    }
    else {
        cout << "你窮逼買不起防具。" << endl;
    }
}

int Shop::getTotal() const { return total; }
int Shop::getSpent() const { return spent; }
