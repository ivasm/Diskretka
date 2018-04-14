#pragma once
// P-10
/*
P* MOD_PP_P(P * a, P * b)//Принимает на вход a, b, result и записывает в result остаток от деления a на b
{
	P* quotient;//Частное от деления a на b
	P* result;
	quotient = DIV_PP_P(a, b);//Вычисляем это частное
	P* temp;
	temp = MUL_PP_P(quotient, b, );//Домножаем частное на делитель
	result = SUB_PP_P(a, temp);//Вычитаем из делимого произведения делителя на частное = вычисляем остаток
	return result;
}
*/