// N-10
#include "golova.h"

unsigned short int DIV_NN_Dk(Nat number1, Nat number2, unsigned short int &k)
{
	unsigned short int result = 0;
	k = 0;
	switch (COM_NN_D(number1, number2))
	{
	case 0:
		result = 1;
		break;
	case 1:
		// number1 < number2
		k = number1.razmer - number2.razmer;
		while (COM_NN_D(MUL_Nk_N(number1, k), number2) != 2)
			k++;
		number1 = MUL_Nk_N(number1, k);
		while (COM_NN_D(number1, number2) != 2)
		{
			number2 = SUB_NN_N(num1, num2);
			result++
		}
		break;
	case 2:
		//number1 > number2
		/* Меняем местами number1 и number2 */
		Nat n = number1;
		number2 = number1;
		number1 = n;
		k = number1.razmer - number2.razmer;
		while (COM_NN_D(MUL_Nk_N(number1, k), number2) != 2)
			k++;
		number1 = MUL_Nk_N(number1, k);
		while (COM_NN_D(number1, number2) != 2)
		{
			number2 = SUB_NN_N(num1, num2);
			result++
		}
		break;
	default:
		break;
	}
	return result;
}