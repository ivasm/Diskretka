#pragma once
// Z-4

Z TRANS_N_Z(N a)
{
	Z b;
	b.number = &a;
	b.sign = 0;
	Z* resPtr = &b;
	return *resPtr;
}