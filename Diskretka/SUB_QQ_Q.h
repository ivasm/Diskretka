#pragma once
// Q-6

Q SUB_QQ_Q(Q f1, Q f2) {
	f2.num->sign = !f2.num->sign;
	return ADD_QQ_Q(f1, f2);
}