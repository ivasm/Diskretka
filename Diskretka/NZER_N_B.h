#pragma once
// N-2

bool NZER_N_B(N a)
{
	if (a.len == 1)
	{
		if (a.n[0] == 0)
			return false;
		else
			return true;
	}
	else
		return true;
}