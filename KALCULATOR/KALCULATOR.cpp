﻿#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b;
	int l;

	char g, r, q;

	g = 'y';
	r = 'e';
	q = 's';

	while (g == 'y'&& r=='e'&& q=='s')
	{
		cout << "Введіть перше число: ";
		cin >> a;
		cout << "Введіть друге число: ";
		cin >> b;

		cout << "\n";

		cout << "Виберіть математичну операцію:\n\n";
		cout << "Додавання(позначається 1)\n\n";
		cout << "Множення(позначається 2)\n\n";
		cout << "Віднімання(позначається 3)\n\n";
		cout << "Ділення(позначається 4)\n\n";
		cout << "Корінь з числа(позначається 5)\n\n"; //Щоб добути корінь з числа достатньо одну з змінних присвоїти "0" а другій змінній певне число

		cout << "Ви ввели операцію: ";
		cin >> l;

		switch (l)
		{
		case 1:
			cout << "Результат обчислення: " << a + b << "\n";
			break;
		case 2:
			cout << "Результат обчислення: " << a * b << "\n";
			break;
		case 3:
			cout << "Результат обчислення: " << a - b << "\n";
			break;
		case 4:
			cout << "Результат обчислення: " << a / b << "\n";
			break;
		case 5:
			cout << "Результат обчислення: " << sqrt(a + b) << "\n";
			break;
		}

		cout << "Введіть yes(якщо хочете продовжити користуватись калькулятором)\n";
		cout << "Введіть noo(якщо хочете завершити користуватись калькулятором)\n";
		cout << "Ви хочете продовжити користуватися калькулятором?: ";
		cin >> g;
		cin >> r;
		cin >> q;
		cout << "\n";
	}

	cout << "Калькулятор був випробуваний";

	return 0;
}