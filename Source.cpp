#include "fraction.h"

int main()
{
	setlocale(LC_ALL, "rus");

	fraction fract_1, fract_2;

	int num, den;

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
				fract_1.sumn(fract_2.get_numerator(), fract_2.get_den());
				break;
			case SUBTRACTION:
				fract_1.subtraction(fract_2.get_numerator(), fract_2.get_den());
				break;
			case MULTIPLICATION:
				fract_1.multiplication(fract_2.get_numerator(), fract_2.get_den());
				break;
			case DIVISION:
				fract_1.devision(fract_2.get_numerator(), fract_2.get_den());
				break;
			case EXIT:
				break;
		default:
			break;
		}


	} while (user != '0');

	return 0;
}

