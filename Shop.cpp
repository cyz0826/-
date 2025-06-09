#include "Shop.h"

Shop::Shop() : name("�_�I�̰ө�"), spent(0), total(0) {}

Shop::Shop(string shopName, int totalGold) : name(shopName), spent(0), total(totalGold) {}

void Shop::displayItems() const {
    cout << "=== " << name << " �ӫ~�M�� ===" << endl;
    cout << "1. �^�_�Ĥ� (10 ����): �^�_ 30 HP" << endl;
    cout << "2. �Z���ɯ� (20 ����): ���� +3" << endl;
    cout << "3. ����ɯ� (20 ����): ���m +2" << endl;
}

void Shop::buyPotion(Hero& hero) {
    if (hero.getGold() >= 10) {
        hero.spendGold(10);
        hero.heal(30); 
        spent += 10;
        cout << "�A�ʶR�F�@�~�^�_�Ĥ��A��_�F 30 HP�I" << endl;
    }
    else {
        cout << "�A�a�G�R���_�^�_�Ĥ��C" << endl;
    }
}

void Shop::buyWeapon(Hero& hero) {
    if (hero.getGold() >= 20) {
        hero.spendGold(20);
        hero.upgradeATK(3); 
        spent += 20;
        cout << "�A�ʶR�F�Z���ɯšA�����O���ɤF�I" << endl;
    }
    else {
        cout << "�A�a�G�R���_�Z���C" << endl;
    }
}

void Shop::buyArmor(Hero& hero) {
    if (hero.getGold() >= 20) {
        hero.spendGold(20);
        hero.upgradeDEF(2); 
        spent += 20;
        cout << "�A�ʶR�F����ɯšA���m�O���ɤF�I" << endl;
    }
    else {
        cout << "�A�a�G�R���_����C" << endl;
    }
}

int Shop::getTotal() const {
    return total;
}

int Shop::getSpent() const {
    return spent;
}
