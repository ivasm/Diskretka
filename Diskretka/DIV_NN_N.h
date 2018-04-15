#pragma once
// N-11

N* DIV_NN_N(N* a, N* b)
{
	N* result = initN();
	result = SUB_NDN_N(SUB_NDN_N(a, b, 0), SUB_NDN_N(a, b, DIV_NN_Dk(a, b, 0)), DIV_NN_Dk(a, b, 0) + 1);
	return result;
}