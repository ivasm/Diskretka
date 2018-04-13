#pragma once

#include "golova.cpp"
#include "COM_NN_D.cpp" // N-1 *
#include "NZER_N_B.cpp" // N-2 *
#include "ADD_1N_N.cpp" // N-3 *
#include "ADD_NN_N.cpp" // N-4 *
#include "SUB_NN_N.cpp" // N-5 -
#include "MUL_ND_N.cpp" // N-6 *
#include "MUL_Nk_N.cpp" // N-7 *
#include "MUL_NN_N.cpp" // N-8 -
#include "SUB_NDN_N.cpp" // N-9 *
#include "DIV_NN_Dk.cpp" // N-10 -
#include "DIV_NN_N.cpp" // N-11 -
#include "MOD_NN_N.cpp" // N-12
#include "GCF_NN_N.cpp" // N-13 *
#include "LCM_NN_N.cpp" // N-14 *
#include "ABS_Z_N.cpp" // Z-1
#include "POZ_Z_D.cpp" // Z-2
#include "MUL_ZM_Z.cpp" // Z-3
#include "TRANS_N_Z.cpp" // Z-4
#include "TRANS_Z_N.cpp" // Z-5
#include "ADD_ZZ_Z.cpp" // Z-6
#include "SUB_ZZ_Z.cpp" // Z-7
#include "MUL_ZZ_Z.cpp" // Z-8
#include "DIV_ZZ_Z.cpp" // Z-9
#include "MOD_ZZ_Z.cpp" // Z-10
#include "RED_Q_Q.cpp" // Q-1
#include "INT_Q_B.cpp" // Q-2
#include "TRANS_Z_Q.cpp" // Q-3
#include "TRANS_Q_Z.cpp" // Q-4
#include "ADD_QQ_Q.cpp" // Q-5
#include "SUB_QQ_Q.cpp" // Q-6
#include "MUL_QQ_Q.cpp" // Q-7
#include "DIV_QQ_Q.cpp" // Q-8
#include "ADD_PP_P.cpp" // P-1
#include "SUB_PP_P.cpp" // P-2
#include "MUL_PQ_P.cpp" // P-3
#include "MUL_Pxk_P.cpp" // P-4
#include "LED_P_Q.cpp" // P-5
#include "DEG_P_N.cpp" // P-6
#include "FAC_P_Q.cpp" // P-7
#include "MUL_PP_P.cpp" // P-8
#include "DIV_PP_P.cpp" // P-9
#include "MOD_PP_P.cpp" // P-10
#include "GCF_PP_P.cpp" // P-11
#include "DER_P_P.cpp" // P-12
#include "NMR_P_P.cpp" // P-13