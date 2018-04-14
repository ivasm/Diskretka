#pragma once
// N-5

N SUB_NN_N(N a, N b)
{
	N c;
	int l = 0;
	for (size_t i = 0; i < a.len; i++)
	{
		c.n = (int*)realloc(c.n, (l + 1) * sizeof(int));
		if (i < b.len)
		{
			if (a.n[i] > b.n[i])
				c.n[i] = a.n[i] - b.n[i];
			else if (a.n[i] == b.n[i])
				c.n[i] = 0;
			else if (a.n[i] < b.n[i])
			{
				c.n[i] = a.n[i] + 10 - b.n[i];
				a.n[i + 1]--;
			}
		}
		else
			c.n[i] = a.n[i];
		l++;
	}
	for (int i = l - 1; i >= 0 && c.n[i] == 0; i--)
	{
		c.n = (int*)realloc(c.n, sizeof(int) * (l - 1));
		l--;
	}
	c.len = l;
	return c;
}