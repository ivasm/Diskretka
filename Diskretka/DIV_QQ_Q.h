#pragma once
// Q-8

Q* DIV_QQ_Q(Q First, Q Second)
{
	struct N Temp1; // Натуральное представление первого числителя
	struct N Temp2; // Натуральное представление второго числителя
	struct Q* Result; // Результат умножения
	Temp1 = ABS_Z_N(*First.num);
	Temp2 = ABS_Z_N(*Second.num);
	if (First.num[0].sign == Second.num[0].sign)
		Result[0].num[0].sign = 0;
	else
		Result[0].num[0].sign = 1;
	Result = (struct Q*) malloc(sizeof(struct Q));
	Result[0].num = (struct Z*) malloc(sizeof(struct Z));
	Result[0].num[0].number = (struct N*) malloc(sizeof(struct N));
	Result[0].num[0].number = &MUL_NN_N(Temp1, *Second.denom);
	Result[0].denom = (struct N*) malloc(sizeof(struct N));
	Result[0].denom = &MUL_NN_N(*First.denom, Temp2);
	return Result;
}