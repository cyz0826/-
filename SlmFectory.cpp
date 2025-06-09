#include"SlmFectory.h"
#include <cstdlib> 

Slm SlmFectory::cRandomSlm() {
	int r = rand() % 100;
	if (r < 50) {
		return cNormalSlm();
	}
	else if (r < 65) {
		return cFireSlm();
	}
	else if (r < 80) {
		return cIceSlm();
	}
	else if (r < 90) {
		return cRockSlm();
	}
	else if (r < 95) {
		return cCoinSlm();
	}
	else {
		return cBossSlm();
	}
}
Slm SlmFectory::cNormalSlm() {
	return Slm("���q�v�ܩi", 30, 5, 2, 1);
}
Slm SlmFectory::cFireSlm() {
	return Slm("���K�v�ܩi", 40, 8, 3, 3);
}
Slm SlmFectory::cIceSlm() {
	return Slm("�B���v�ܩi", 35, 6, 4, 3);
}
Slm SlmFectory::cRockSlm() {
	return Slm("���t�v�ܩi", 50, 3, 10, 5);
}
Slm SlmFectory::cCoinSlm() {
	return Slm("�����v�ܩi", 30, 3, 2, 20);
}
Slm SlmFectory::cBossSlm() {
	return Slm("�v�ܩi Boss", 100, 10, 5, 10);
}