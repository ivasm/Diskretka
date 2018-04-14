#pragma once
// Z-9

Z DIV_ZZ_Z(struct Z First, struct N Second)
{
	struct N Module; // Абсолютная величина уменьшаемого
	struct Z Result; // Частное от деления
	Module = *ABS_Z_N(&First);
	Result.sign = First.sign;
	Result.number = &DIV_NN_N(Module, Second);
	if (Result.sign == 1)
		ADD_1N_N(Result.number);
	return Result;
}