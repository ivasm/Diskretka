#include "ALL.h"
// пофиксить ввод натуральных чисел (ввод отрицательных, вообд неснольких нулей подряд 00000000000)
// протестить модули Z,Q,P

int main()
{
	puts("Diskretka");
	N a, b;
	do
	{
		a = *inputN();
		b = *inputN();
		N c = SUB_NDN_N(a, b,10);
		printN(&c);
	} while (1);
	a = *inputN();
	b = *inputN();
	N c = ADD_NN_N(a, b);
	printN(&c);
    return 0;
}