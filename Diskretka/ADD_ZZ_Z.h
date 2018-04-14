#pragma once
// Z-6

Z ADD_ZZ_Z(Z num1, Z num2)
{
	N n1, n2;
	Z sum;
	n1 = ABS_Z_N(num1);	//Модуль от первого числа
	n2 = ABS_Z_N(num2);	//Модуль от второго числа
	if (POZ_Z_D(num1) == 2 || POZ_Z_D(num1) == 0)	//Первое число либо положительное, либо '0'
		if (POZ_Z_D(num2) == 2 || POZ_Z_D(num2) == 0)	//Второе число либо положительное, либо '0'
		{
			sum.number = &ADD_NN_N(n1, n2);
			sum.sign = num1.sign;
			return sum;
		}
		else
			if (COM_NN_D(n1, n2) == 2 || COM_NN_D(n1, n2) == 0)	//Первое число(по модолю) больше второго, либо равно ему
			{
				sum.number = &SUB_NN_N(n1, n2);
				sum.sign = num1.sign;
				return sum;
			}
			else     //Второе число(по модулю) больше первого
			{
				sum.number = &SUB_NN_N(n2, n1);
				sum.sign = num1.sign;
				sum = MUL_ZM_Z(sum);
				return sum;
			}
	else       //Первое число отрицательное
		if (POZ_Z_D(num2) == 2 || POZ_Z_D(num2) == 0)	// Второе число либо положительное, либо '0'
			if (COM_NN_D(n1, n2) == 2 || COM_NN_D(n1, n2) == 0)//Первое число(по модолю) больше второго, либо равно ему
			{
				sum.number = &SUB_NN_N(n1, n2);
				sum.sign = num2.sign;
				sum = MUL_ZM_Z(sum);
				return sum;
			}
			else   //Второе число(по модулю) больше первого
			{
				sum.number = &ADD_NN_N(n1, n2);
				sum.sign = num1.sign;
				return sum;
			}
}