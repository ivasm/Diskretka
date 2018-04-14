#pragma once
// N-9

N SUB_NDN_N(N a, N b, int d)
{
	//переменная для умножения на число
	N afterMul;
	afterMul.n = 0;
	afterMul.len = 0;
	N result;
	result.n = 0;
	result.len = 0;
	afterMul = (MUL_ND_N(b, d)); //Умножаем
	result = (SUB_NN_N(a, afterMul));
	return result;
}