// N-5
#include "golova.h"

N SUB_NN_N(N a, N b)
{
	N c;
	int l = 0;

	if (COM_NN_D(a, b) == 2)
	{
		for (size_t i = 0; i < a.len; i++)
		{
			c.n = (int*)realloc((l + 1) * sizeof(int));
			if (a.n[i] > b.n[i])
				c.n[i] = a.n[i] - b.n[i];
			else if (a.n[i] == b.n[i])
				c.n[i] = 0;
			else if (a.n[i] < b.n[i])
			{
				c.n[i] = (a.n[i] + 10) - b.n[i];
				c.n[i + 1]--;
			}
			else
			{
				c.n[i] = a.n[i];
			}
			l++;
		}
	}
	else if (COM_NN_D(a, b) == 0)
	{
		c.n = (int*)malloc(sizeof(int));
		c.len = 0;
	}
	c.len = l + 1;
	return c;
}