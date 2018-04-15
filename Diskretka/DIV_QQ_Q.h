#pragma once
// Q-8

Q* DIV_QQ_Q(Q First, Q Second)
{
	N Temp1; // Натуральное представление первого числителя
	N Temp2; // Натуральное представление второго числителя
	Q* Result; // Результат умножения
	Temp1 = *ABS_Z_N(First.num);
	Temp2 = *ABS_Z_N(Second.num);
	Result = (Q*) malloc(sizeof(Q));
	if (First.num[0].sign == Second.num[0].sign)
		Result[0].num[0].sign = 0;
	else
		Result[0].num[0].sign = 1;
	
	Result[0].num = (Z*) malloc(sizeof(Z));
	Result[0].num[0].number = (N*) malloc(sizeof(N));
	Result[0].num[0].number = MUL_NN_N(&Temp1, Second.denom);
	Result[0].denom = (N*) malloc(sizeof(N));
	Result[0].denom = MUL_NN_N(First.denom, &Temp2);
	return Result;
}