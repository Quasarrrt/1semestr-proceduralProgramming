﻿// sortirovkastroki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{//руками
	setlocale(LC_ALL, "Russian");
	system("chcp 65001");
	string mas[30];
	string nesort = "";
	string sort = "";
	for (int i = 0; i < 30; i++)
	{
		cin >> mas[i];
	}
	for (int i = 0; i < 30; i++)
	{
		nesort += mas[i];
	}
	cout << "Несортированная строка"<<endl;
	cout<< nesort << endl;
	cout<< "Сортированная строка"<<endl;
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 29; j++) {
			if (mas[j] > mas[j + 1]) {
			    string  b = mas[j]; // создали дополнительную переменную
				mas[j] = mas[j + 1]; // меняем местами
				mas[j + 1] = b; // значения элементов
			}
		}
	}
	for (int i = 0; i < 30; i++)
	{
		sort += mas[i];
	}
	cout << sort<< endl;
};
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.