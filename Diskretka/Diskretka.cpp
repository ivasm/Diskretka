#include "ALL.h"

int main()
{
	puts("Diskretka");
	N* a,* b;
	do
	{
		a = inputN();
		b = inputN();
		//printf("%d\n", DIV_NN_Dk(a, b, 3));
		N c = *DIV_NN_N(a, b);
		printN(&c);
		puts("");
		printN(a);
		puts("");
		printN(b);
	} while (1);
    return 0;
}