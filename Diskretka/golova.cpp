#include "golova.h"

N* initN() {
	N* n = (N*)malloc(sizeof(N));
	return n;
}

N* inputN() {
	printf("Enter N: ");
	char *symbol = (char*)malloc(1);
	int *k = nullptr, len = 0;
	N *number = nullptr;
	do {
		*symbol = getchar();
		if ('0' <= *symbol && *symbol <= '9') {
			k = (int*)realloc(k, (len + 1) * sizeof(int));
			k[len] = atoi(symbol);
			len++;
		}
	} while ('0' <= *symbol && *symbol <= '9');
	number = (N*)malloc(sizeof(N));
	number->n = (int*)malloc(len * sizeof(int));
	number->len = len;
	for (int i = 0; i < len; i++)
		number->n[i] = k[len - i - 1];
	free(k);
	free(symbol);
	return number;
}

void printN(N* num) {
	for (int i = num->len - 1; i >= 0; i--)
		printf("%d", num->n[i]);
}

N* freeN(N* n) {
	free(n->n);
	free(n);
	return nullptr;
}

Z* initZ() {
	Z* z = (Z*)malloc(sizeof(Z));
	z->number = initN();
	return z;
}

Z* inputZ() {
	Z* z = nullptr;
	z = (Z*)malloc(sizeof(Z));
	char *s = (char*)malloc(1);
	*s = getchar();
	if (*s == '-')
		z->sign = false;
	else
		z->sign = true;
	z->number = inputN();
	if (*s != '-') {
		z->number->n = (int*)realloc(z->number->n, (z->number->len + 1) * 4);
		z->number->len++;
		z->number->n[z->number->len - 1] = atoi(s);
	}
	free(s);
	return z;
}

void printZ(Z* z) {
	if (!z->sign)
		printf("-");
	printN(z->number);
}

Z* freeZ(Z* z) {
	freeN(z->number);
	free(z);
	return nullptr;
}

Q* initQ() {
	Q* q = (Q*)malloc(sizeof(Q));
	q->num = initZ();
	q->denom = initN();
	return q;
}

Q* inputQ() {
	Q* q = (Q*)malloc(sizeof(Q));
	printf("Enter numerator: ");
	q->num = inputZ();
	puts("");
	printf("Enter denominator: ");
	q->denom = inputN();
	puts("");
	return q;
}

void printQ(Q* q) {
	printZ(q->num);
	printf(" / ");
	printN(q->denom);
}

Q* freeQ(Q* q) {
	freeN(q->denom);
	freeZ(q->num);
	free(q);
	return nullptr;
}

P* inputP() {
	P* p = nullptr;
	Q **qs = nullptr;
	int len;
	printf("Enter a power of polynom: ");
	len = getNumber();
	qs = (Q**)realloc(qs, sizeof(Q*) * (len + 1));
	for (int i = len; i >= 0; i--) {
		printf("***\nEnter coefficient %d\n", len - i);
		qs[i] = inputQ();
	}
	p = (P*)malloc(sizeof(P));
	p->k = qs;
	p->len = len;
	return p;
}

void printP(P* p) {
	int last = -1;
	for (int i = 0; i <= p->len; i++) {
		if (p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1)
			last = i;
		else
			break;
	}
	for (int i = p->len; i >= 0 && i != last; i--) {
		if (i != 0) {
			if (!(p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1)) {
				printf("( ");
				printQ(p->k[i]);
				printf(" ) * x^%d ", i);
				if (i - 1 != last) printf("+ ");
			}
		}
		else
			if (!(p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1))
				printQ(p->k[i]);
	}
}

P* freeP(P* p) {
	for (int i = 0; i < p->len; i++)
		freeQ(p->k[i]);
	free(p->k);
	free(p);
	return nullptr;
}

int getNumber() {
	char* number = nullptr;
	int toReturn;
	char symbol;
	int lenght = 0;

	do {
		do {
			symbol = getchar();
			if (symbol == 8 && lenght > 0) {
				printf("%c %c", 8, 8);
				lenght--;
				number = (char*)realloc(number, lenght * sizeof(char));
			}
			else if (symbol >= '0' && symbol <= '9') {
				printf("%c", symbol);
				number = (char*)realloc(number, (lenght + 1) * sizeof(char));
				*(number + lenght) = symbol;
				lenght++;
			}
		} while (symbol != '\r');
		if (lenght == 0) printf("\n");
	} while (lenght == 0);

	number = (char*)realloc(number, (lenght + 1) * sizeof(char));
	*(number + lenght) = '\0';
	puts("");
	toReturn = atoi(number);
	free(number);
	return toReturn;
}