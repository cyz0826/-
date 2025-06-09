#ifndef SLMFACTORY_H
#define SLMFACTORY_H
#include "Slm.h"
using namespace std;


class SlmFactory {
public:
	static Slm cRandomSlm();
	static Slm cNormalSlm();//50%
	static Slm cFireSlm();//15%
	static Slm cIceSlm();//15%
	static Slm cRockSlm();//10%
	static Slm cCoinSlm();//5%
	static Slm cBossSlm();//5%
};

#endif
