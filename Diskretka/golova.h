#pragma once
#include "malloc.h"
#include <iostream>

struct N {
	int *n = nullptr;
	int len;
};

struct Z {
	N *number;
	bool sign = true;
};

struct Q {
	Z *num;
	N *denom;
};

struct P {
	Q **k;
	int len;
};

N* inputN();
void printN(N*);
N* freeN(N*);

Z* inputZ();
void printZ(Z*);
Z* freeZ(Z*);

Q* inputQ();
void printQ(Q*);
Q* freeQ(Q*);

P* inputP();
void printP(P*);
P* freeP(P*);

int getNumber();