#pragma once
// Q-3

Q* TRANS_Z_Q(Z First)
{
	Q* Rez; // Результат перевода
	Rez = (Q*)malloc(sizeof(Q));
	Rez->num = (Z*)malloc(sizeof(Z));
	Rez->num = &First;
	Rez->num->number = (N*)malloc(sizeof(N));
	Rez->num->number->n = (int*)malloc(sizeof(int));
	Rez->num->number->n[0] = 1;
	return Rez;
}