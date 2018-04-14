#pragma once
// N-4

N ADD_NN_N(N a, N b)
{
	N result;
	if (COM_NN_D(a, b) == 2)
	{
		result = a;
		for (int i = 0; i < result.len; i++)
		{
			result.n[i] += b.n[i];
			if (result.n[i]>9)
			{
				result.n[i] %= 10;
				if (i == result.len - 1)
					result.n = (int*)realloc(result.n, (++result.len) * sizeof(int));
				result.n[i + 1] = 1;
			}
		}
	}
	else
	{
		result = b;
		for (int i = 0; i < result.len; i++)
		{
			result.n[i] += a.n[i];
			if (result.n[i]>9)
			{
				result.n[i] %= 10;
				if (i == result.len - 1)
					result.n = (int*)realloc(result.n, (++result.len) * sizeof(int));
				result.n[i + 1] = 1;
			}
		}
	}
	return result;
}