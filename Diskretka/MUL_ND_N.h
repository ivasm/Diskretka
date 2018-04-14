#pragma once
// N-6

N MUL_ND_N(N a, int b)
{
	N c;
	int temp = 0, l = 0, temp2 = 0;
	for (int i = 0; i < a.len; i++)
	{
		c.n = (int*)realloc(c.n, (l + 1) * sizeof(int));
		temp = a.n[i] * b;
		if (temp > 9)
		{
			c.n[i] = temp % 10;
			temp2 = temp / 10;
		}
		else
		{
			c.n[i] = temp;
		}
		c.n[i] += temp2;
		temp2 = 0;

		l++;
	}
	c.len = l + 1;
	return c;
}