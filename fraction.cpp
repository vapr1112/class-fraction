#include "fraction.h"

int fraction:: search_nod(int& general_num, int& general_den)
{
	int buf_num = general_num, buf_den = general_den;

	while (buf_num != buf_den)
	{
		if (buf_num > buf_den)
		{
			buf_num -= buf_den;
		}
		else
		{
			buf_den -= buf_num;
		}
	}

	return buf_den;
}

void fraction::sumn(int num_2, int den_2)
{
	int general_den, general_num, nod;

	general_den = denominator * den_2;
	general_num = ((numerator * den_2) + (num_2 * denominator));

	nod = search_nod(general_num, general_den);
	printf("Сумма %d/%d", general_num / nod, general_den / nod);
}

void fraction:: subtraction(int num_2, int den_2)
{
	int general_den, general_num, nod;

	general_den = denominator * den_2;
	general_num = ((numerator * den_2) - (num_2 * denominator));

	nod = search_nod(general_num, general_den);
	printf("Разность %d/%d", general_num / nod, general_den / nod);

}

void fraction::multiplication(int num_2, int den_2)
{
	int buf_den, buf_num, nod;

	buf_num = numerator * num_2;
	buf_den = denominator * den_2;

	nod = search_nod(buf_num, buf_den);

	printf("Произведение %d/%d", buf_num / nod, buf_den / nod);
}

void fraction:: devision(int num_2, int den_2)
{
	int buf_den, buf_num, nod;

	buf_num = numerator * den_2;
	buf_den = denominator * num_2;

	nod = search_nod(buf_num, buf_den);

	printf("частное %d/%d", buf_num / nod, buf_den / nod);

}