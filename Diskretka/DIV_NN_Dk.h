#pragma once
// N-10

int DIV_NN_Dk(N a, N b, int k)
{
	int rez;
	int d = COM_NN_D(a, b);
	if (d == 2) {
		N mk = MUL_Nk_N(b, k);
		int temp = 0;
		int i = 1;
		do
		{
			temp = temp * 10 + a.n[a.len - i];
			rez = temp / mk.n[mk.len - 1];
			i++;
		} while (rez == 0);
		
		
	}
	else if (d == 1) {
		N mk = MUL_Nk_N(a, k);
		int temp = 0;
		int i = 1;
		do
		{
			temp = temp * 10 + b.n[b.len - i];
			rez = temp / mk.n[mk.len - 1];
			i++;
		} while (rez == 0);
		
	}
	else
		rez = 1;
	return rez;
}