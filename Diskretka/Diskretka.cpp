#include "ALL.h"
// пофиксить ввод натуральных чисел (ввод отрицательных, ввод неснольких нулей подряд 00000000000)
// протестить модули Z,Q,P
// унифицировать параметры функций

int main()
{
	puts("Diskretka");
	N a, b;
	do
	{
		a = *inputN();
		b = *inputN();
		N c = MOD_NN_N(a, b);
		printN(&c);
	} while (1);
	a = *inputN();
	b = *inputN();
	N c = ADD_NN_N(a, b);
	printN(&c);
    return 0;
}