#pragma once
// N-14

N LCM_NN_N(N First, N Second)
{
	N NOD; // НОД двух чисел
	N NOK; // НОК двух чисел
	N Temp; // Произведение двух чисел
	NOD = GCF_NN_N(First, Second); // НОД чисел
	Temp = *MUL_NN_N(&First, &Second); // Произведение чисел
	NOK = *DIV_NN_N(&Temp, &NOD); // НОК = отношение произведения чисел к их НОД
	return NOK;
}