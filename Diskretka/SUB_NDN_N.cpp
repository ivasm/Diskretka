// N-9
#include "golova.h"

N* SUB_NDN_N(N* a, N* b, int d /*на что умножаем*/)
{
	//переменная для умножения на число
	N* afterMul = NULL;
	N* result = NULL;
	N* afterMul = (N*)malloc((MUL_NN_N(b, d)) * sizeof N); //Умножаем
	N*	result = (N*)malloc((SUB_NN_N(a, afterMul)) * sizeof N);
	if (result != NULL)
	{
		//отнимаем, если все хорошо возвращаем результат
		return result;
	}
	//если второе натуральное больше первого - ошибка
	return 0;
}