#pragma once
// N-12

N MOD_NN_N(N num, N mod) {
	// num - (num div mod) * mod 
	return *SUB_NN_N(&num, MUL_NN_N(DIV_NN_N(&num, &mod), &mod));
}