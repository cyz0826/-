#include"SlmFactory.h"
#include <cstdlib> 

Slm SlmFactory::cRandomSlm() {
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
Slm SlmFactory::cNormalSlm() {
	return Slm("普通史萊姆", 30, 5, 2, 1);
}
Slm SlmFactory::cFireSlm() {
	return Slm("火焰史萊姆", 40, 8, 3, 3);
}
Slm SlmFactory::cIceSlm() {
	return Slm("冰霜史萊姆", 35, 6, 4, 3);
}
Slm SlmFactory::cRockSlm() {
	return Slm("岩系史萊姆", 50, 3, 10, 5);
}
Slm SlmFactory::cCoinSlm() {
	return Slm("金幣史萊姆", 30, 3, 2, 20);
}
Slm SlmFactory::cBossSlm() {
	return Slm("史萊姆 Boss", 100, 10, 5, 10);
}
