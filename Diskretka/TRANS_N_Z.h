#pragma once
// Z-4

Z *TRANS_N_Z(N *a)
{
	Z *z = (Z*)malloc(sizeof(Z));
	z->sign = 1;
	z->number = (N*)malloc(sizeof(N));
	z->number->n = (int*)malloc(sizeof(int) * a->len);
	z->number->len = a->len;
	for (int i = 0; i < a->len; i++)
		z->number->n[i] = a->n[i];
	return z;
}