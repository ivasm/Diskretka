// N-8
#include "golova.h"

Nat MUL_NN_N(Nat a, Nat b)
{
	int k = 0, i;
	Nat p;
	for (i = b.razmer; i > 0; i--)
	{
		p = ADD_NN_N(p, MUL_Nk_N(MUL_ND_N(a, b.chislo[i]), k));
		k++;
	}
	return p;
}