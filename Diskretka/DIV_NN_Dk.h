#pragma once
// N-10

int DIV_NN_Dk(N a, N b, int k)
{
	int rez;
	int d = COM_NN_D(a, b);
	if (d == 2) {
		N mk = MUL_Nk_N(b, k);
		rez = a.n[a.len - 1] / mk.n[mk.len - 1];
	}
	else if (d == 1) {
		N mk = MUL_Nk_N(a, k);
		rez = b.n[b.len - 1] / mk.n[mk.len - 1];
	}
	else
		rez = 1;
	return rez;
}