#pragma once
// N-11

N DIV_NN_N(N X1, N X2)
{
	N xCopy;         //��������� ��������� ����������, ������� �����
					 //������� ����� ��������
	N t;    //��������� ���������� �������, ��������.
	t.n = (int*)malloc(sizeof(int));
	t.n[0] = 0;
	t.len = 1;
	if (!NZER_N_B(X2))   //���� �������� ����� ����, ������ ������
		printf("�������� ����� ����.");
	else
		if (COM_NN_D(X1, X2) == 2) //���� ������ ����� ������ �������:
		{
			xCopy = X1; //�� ��������� ���������� ���������� �������� �������� �����
			do
			{
				xCopy = SUB_NN_N(xCopy, X2);  //�������� �� �������� ����� �������
				ADD_1N_N(&t);  //���������� t
			} while (COM_NN_D(xCopy, X2) == 2 || COM_NN_D(xCopy, X2) == 0);  //���� ���� ������� ������ ��� ����� ��������
		}

		else
			if (COM_NN_D(X1, X2) == 1)  //���� ������ ����� ������ �������: (������ �� �� ��������)
			{
				xCopy = X2;
				do
				{
					xCopy = SUB_NN_N(xCopy, X1);
					ADD_1N_N(&t);
				} while (COM_NN_D(xCopy, X1) == 2);
			}
			else
				if (COM_NN_D(X1, X2) == 0)  //���� ����� �����
					ADD_1N_N(&t);
	return t;
}