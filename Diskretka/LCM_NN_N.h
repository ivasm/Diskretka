#pragma once
// N-14

N LCM_NN_N(struct N First, struct N Second)
{
	struct N NOD; // НОД двух чисел
	struct N NOK; // НОК двух чисел
	struct N Temp; // Произведение двух чисел
	NOD = GCF_NN_N(First, Second); // НОД чисел
	Temp = MUL_NN_N(First, Second); // Произведение чисел
	NOK = DIV_NN_N(Temp, NOD); // НОК = отношение произведения чисел к их НОД
	return NOK;
}