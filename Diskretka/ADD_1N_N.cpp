// N-3
#include "golova.h"

void ADD_1N_N(N* a)
{
	if (a->n[0] != 9)
		(a->n[0])++;
	else
	{
		unsigned int count = 0;
		while (a->n[count] == 9)
			(a->n[count++]) = 0;
		if (count == a->len)
		{
			a->len++;
			a->n = (int*)realloc(a->n, (a->len) * sizeof(int));
			a->n[count] = 1;
		}
		else
			(a->n[count])++;
	}
}