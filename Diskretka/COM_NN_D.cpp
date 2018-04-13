// N-1
#include "golova.h"

int COM_NN_D(N a, N b)
{
	if (a.len > b.len)
		return 2;
	if (a.len < b.len)
		return 1;
	else
	{
		for (int i = a.len - 1; i >= 0; i--)
		{
			if (a.n[i] > b.n[i])
				return 2;
			if (a.n[i] < b.n[i])
				return 1;
		}
		return 0;
	}
}