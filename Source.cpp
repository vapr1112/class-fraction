#include "fraction.h"

int main()
{
	setlocale(LC_ALL, "rus");

	fraction fract_1, fract_2, fract_3;

	int num, den, nod;

	char user;

	enum Menu { EXIT = '0', INITIALISATION = '1', SUMN = '+', SUBTRACTION = '-', MULTIPLICATION = '*', DIVISION = '/', PRINT = '2' };

	do
	{
		printf("\n1: Введите числитель и знаменатель первой и второй дроби и выберите действие с ними +, -, * или / либо 2: показать \n");

		cin >> user;

		switch (user)
		{
			case INITIALISATION:
				cin >> num >> den;
				fract_1.set_numerator(num);
				fract_1.set_den(den);

				cin >> num >> den;
				fract_2.set_numerator(num);
				fract_2.set_den(den);
				break;
			case PRINT:
				printf("Первая дробь - %d/%d\n", fract_1.get_numerator(), fract_1.get_den());
				printf("Вторая дробь - %d/%d", fract_2.get_numerator(), fract_2.get_den());
				break;
			case SUMN:
				fract_3 = fract_1 + fract_2;
				nod = fract_3.search_nod();
				printf("Сумма %d/%d", fract_3.get_numerator() / nod, fract_3.get_den() / nod);
				break;
			case SUBTRACTION:
				fract_3 = fract_1 - fract_2;
				nod = fract_3.search_nod();
				printf("разность %d/%d", fract_3.get_numerator() / nod, fract_3.get_den() / nod);
				break;
			case MULTIPLICATION:
				fract_3 = fract_1 * fract_2;
				nod = fract_3.search_nod();
				printf("произведение %d/%d", fract_3.get_numerator() / nod, fract_3.get_den() / nod);
				break;
			case DIVISION:
				fract_3 = fract_1 / fract_2;
				nod = fract_3.search_nod();
				printf("частное %d/%d", fract_3.get_numerator() / nod, fract_3.get_den() / nod);
				break;
			case EXIT:
				break;
		default:
			break;
		}

	} while (user != '0');

	return 0;
}


