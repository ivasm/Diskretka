#pragma once
// N-7

N MUL_Nk_N(N a, int b)
{
	N c;
	int len = a.len + b;
	c.n = (int*)malloc(sizeof(int) * (len));
	for (size_t i = 0; i < len; i++)
	{
		if (i < b)
			c.n[i] = 0;
		else
			c.n[i] = a.n[i - b];
	}
	c.len = len;
	return c;
}