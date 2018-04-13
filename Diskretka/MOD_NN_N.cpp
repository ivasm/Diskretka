// N-12
#include "golova.h"

Nat MOD_NN_N(Nat divide, Nat divider)
{
	while (COM_NN_D(divide, divider) == 2)
		divide = SUB_NDN_N(divide, divider);
	return divide;
}