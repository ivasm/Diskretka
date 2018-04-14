#pragma once
// Z-8

Z MUL_ZZ_Z(Z num1, Z num2)
{
	Z mul;
	N n1, n2;
	n1 = ABS_Z_N(num1); //Модуль от первого числа
	n2 = ABS_Z_N(num2);	//Модуль от второго числа
	if (POZ_Z_D(num1) == 2 || POZ_Z_D(num1) == 0)	//Первое число положительное или '0'
		if (POZ_Z_D(num2) == 2 || POZ_Z_D(num2) == 0)	//Второе число положительное или '0'
		{
			mul.number = &MUL_NN_N(n1, n2);
			mul.sign = num1.sign;
			return mul;
		}
		else//Второе число отрицательное
		{
			mul.number = &MUL_NN_N(n1, n2);
			mul.sign = num1.sign;
			mul = MUL_ZM_Z(mul);
			return mul;
		}
	else//Первое число отрицательное
		if (POZ_Z_D(num2) == 2 || POZ_Z_D(num2) == 0)	//Второе число положительное или '0'
		{
			mul.number = &MUL_NN_N(n1, n2);
			mul.sign = num2.sign;
			mul = MUL_ZM_Z(mul);
			return mul;
		}
		else//Второе число отрицательное
		{
			mul.number = &MUL_NN_N(n1, n2);
			mul.sign = num1.sign;
			mul = MUL_ZM_Z(mul);
			return mul;
		}
}