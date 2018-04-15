#pragma once
// N-2

bool NZER_N_B(N* a) {
	return (a->len != 1 || a->n[0] != 0);
}