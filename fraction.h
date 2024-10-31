#pragma once

#include <iostream>

using namespace std;

class fraction
{
private:
	int numerator;
	int denominator;

	int search_nod(int& general_num, int& general_den);

public:

	fraction()
	{
		numerator = 0;
		denominator = 1;
	}
	fraction(int num_p, int den_p)
	{
		numerator = num_p;
		denominator = den_p;
	}

	void set_numerator(int numerator_p)
	{
		numerator = numerator_p;
	}

	int get_numerator()
	{
		return numerator;
	}

	void set_den(int den_p)
	{
		if (den_p != 0)
		{
			denominator = den_p;
		}
		else
		{
			denominator = 1;
			cout << "\nзнаменатель заменен на 1\n";
		}
	}

	int get_den()
	{
		return denominator;
	}

	void sumn(int num_2, int den_2);

	void subtraction(int num_2, int den_2);


	void multiplication(int num_2, int den_2);

	void devision(int num_2, int den_2);
};
