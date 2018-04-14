#pragma once
// P-12

void DER_P_P(P* p) {
	int last = -1;
	for (int i = 0; i <= p->len; i++) {
		if (p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1)
			last = i;
		else
			break;
	}

	for (int i = p->len; i > 0 && i > last; i--) {
		if (i != 1) {
			if (!(p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1)) {
				printf("( %d * ", i);
				printQ(p->k[i]);
				printf(" ) * x^%d ", i - 1);
				if (i - 1 != last) printf("+ ");
			}
		}
		else
			if (!(p->k[i]->num->number->n[0] == 0 && p->k[i]->num->number->len == 1))
				printQ(p->k[i]);
	}
}