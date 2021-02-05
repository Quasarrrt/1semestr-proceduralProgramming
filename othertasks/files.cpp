// files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <fstream> // работа с файлами
#include <iomanip>//
#include <string>
#include<ctime>//для рандома
#include <locale.h>
#include <map>//для работы с map 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string text;
	ofstream newFile;
	newFile.open("Array.txt", ios_base::out);//создаем и открываем файл
	if (!newFile)//проверка на проблемы с файлом
	{
		cout << "Ошибка с файлом" << endl;
		exit(1);
	}
	int n, i, * arr;
	cout << "Введите число элементов в массиве: " << endl;
	cin >> n;
	arr = new int[n];
	cout << "Введите массив: " << endl;
	for (i = 0; i < n; i++) {//заполняем массив
			cin >> arr[i];
			newFile << arr[i] << " ";
	}
	int  j, b;
	map <int, int> list;//создаем контейнер число-число посторений
	int z = arr[0], max = 1, k;
	for (i = 0; i < n; i++) {
		k = 1;

		for (j = i + 1; j <= n; j++) {//если элемент=другому элменту, то увеличиваем счетчик повторений
			if (arr[i] == arr[j]) {
				k++;
			}
		}
		if (max < k) {//если количество повторений больше максимума, то становится максимумом и записываем в контейнер
			max = k;
			z = arr[i];
			list[z] = max;
		}
		else if (max == k) {//если равно максимуму, то то становится максимумом и записываем в контейнер
			max = k;
			b = arr[i];
			list[b] = max;
		}
	}
	//Запись в файл, где повторяющиеся числа
	ofstream secondFile;
	secondFile.open("Numbers.txt", ios_base::out);//создаем и открываем файл
	if (!secondFile)//проверка на проблемы с файлом
	{
		cout << "Ошибка с файлом" << endl;
		exit(1);
	}
	for (auto elem : list) {//бежим по контейнеру
		if (elem.second == prev(list.end())->second) {
			cout << "Самое повторяемое число: " << elem.first << endl;
			secondFile << elem.first << " ";//cуем повторяющиеся числа в файл
		}
	}
	newFile.close();
	secondFile.close();

	//Чтение файла с исходным массивом
	ifstream oldFile;
	oldFile.open("Array.txt", ios_base::in);//еще раз открываем файл
	if (!oldFile)//проверка на проблемы с файлом
	{
		cout << "Ошибка с файлом" << endl;
		exit(1);
	}
	string out;
	getline(oldFile, out);//считываем из файла массив, который там есть
	cout << "Что в файле Array.txt: " << out << endl;//выводим на экран
	oldFile.close();

	//Чтение файла с повторяющимися числами
	ifstream numberFile;
	numberFile.open("Numbers.txt", ios_base::in);//еще раз открываем файл
	if (!numberFile)//проверка на проблемы с файлом
	{
		cout << "Ошибка с файлом" << endl;
		exit(1);
	}
	string outNum;
	getline(numberFile, outNum);//считываем из файла повторяющиеся числа
	cout << "Что в файле Numbers.txt: " << outNum;//выводим на экран
	numberFile.close();

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
