#pragma once
// N-11

// Кто вызовет функцию с a<b, тот очень плохой человек
// Смирнов Иван
N* DIV_NN_N(N* a, N* b)
{
	N* temp = DIV_NN_Dk(a, b);
	N* result = temp;
	N* R = SUB_NN_N(a, MUL_NN_N(temp, b)) // R = a - [a/b]*b
	while (COM_NN_D(R, b) == 2) // R != b по определению ()
	{
		temp = DIV_NN_Dk(R, b);
		result = ADD_NN_N(result, temp);
		R = SUB_NN_N(R, MUL_NN_N(temp, b))
	}
	return result;
}
