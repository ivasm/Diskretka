#include "ALL.h"

int main()
{
	puts("Diskretka");
	N a, b;
	do
	{
		a = *inputN();
		b = *inputN();
		printf("%d", DIV_NN_Dk(a, b, 1));
		//N c = MOD_NN_N(a, b);
		//printN(&c);
	} while (1);
	a = *inputN();
	b = *inputN();
	N c = ADD_NN_N(a, b);
	printN(&c);
    return 0;
}