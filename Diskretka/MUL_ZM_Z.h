#pragma once
// Z-3

Z MUL_ZM_Z(Z a)
{
	Z* resPtr;
	if (a.sign == 0) a.sign = 1;
	else a.sign = 0;
	resPtr = &a;
	return *resPtr;
}