#include "fraction.h"

int fraction:: search_nod()//����� ���� ���������� ����� ��������
{
	int buf_num = numerator, buf_den = denominator, nod;

	while (buf_num != buf_den)
	{
		if (buf_num > buf_den)
		{
			buf_num -= buf_den;
			nod = buf_num;
		}
		else
		{
			buf_den -= buf_num;
			nod = buf_den;
		}
	}
	return nod;
}