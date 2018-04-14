#pragma once
// Q-4

Z* TRANS_Q_Z(Q First)
{
	Z* Rez; // Результат перевода
	Rez = (Z*)malloc(sizeof(Z));
	Rez->number = (N*)malloc(sizeof(N));
	Rez->number->n = (int*)malloc((First.num[0].number->len) * sizeof(int));
	Rez = First.num;
	return Rez;
}