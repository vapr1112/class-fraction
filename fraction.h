#pragma once

#include <iostream>

using namespace std;

class fraction
{
private:
	int numerator;//���������
	int denominator;//�����������

public:

	fraction() : fraction(0, 1){}

	fraction(int num_p, int den_p) : numerator { num_p }, denominator{ den_p }{}//������� �����������

	explicit fraction(int num_p) : fraction(num_p, 1) {}

	//��������� � ������������
	void set_numerator(int numerator_p)
	{
		numerator = numerator_p;
	}

	int get_numerator()const
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
			cout << "\n����������� ������� �� 1\n";
		}
	}

	int get_den()const
	{
		return denominator;
	}

	//������ ������
	int search_nod();

	//���������� ����������
	friend const fraction operator+(const fraction& obj_p, const fraction& obj_p2)
	{
		return fraction(obj_p.denominator * obj_p2.numerator + obj_p2.denominator * obj_p.numerator, obj_p.denominator * obj_p2.denominator);
	}

	friend const fraction operator-(const fraction& obj_p, const fraction& obj_p2)
	{
		return fraction(obj_p2.denominator * obj_p.numerator - obj_p.denominator * obj_p2.numerator, obj_p.denominator * obj_p2.denominator);
	}

	friend const fraction operator*(const fraction& obj_p, const fraction& obj_p2)
	{
		return fraction(obj_p.numerator * obj_p2.numerator, obj_p.denominator * obj_p2.denominator);
	}

	friend const fraction operator/(const fraction& obj_p, const fraction& obj_p2)
	{
		return fraction(obj_p.numerator * obj_p2.denominator, obj_p.denominator * obj_p2.numerator);
	}
};
