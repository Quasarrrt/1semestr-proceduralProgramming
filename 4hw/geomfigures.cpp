#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
#include <clocale>
#include <cstdlib>

using namespace std;

double squarePr(double a, double b) {
	if ((a < 0) || (b < 0)) {
		cout << "Вы ввели отрицательные числа";
		exit(1);
	}
	else{
		return a * b;
	}
}
double squareTr(double a, double h) {
	
	if ((a < 0) || (h < 0)) {
		cout << "Вы ввели отрицательные числа";
		exit(1);
	}
	else {
		return (1/(2.0))*(a * h);
	}
}
double squareCir(double r) {
	
	if (r<0) {
		cout << "Вы ввели отрицательные числа";
		exit(1);
	}
	else {
		return M_PI * pow(r, 2);
		
	}
}
double num(int x) {
	if (x == 1) {
		double a, b;
		cout << "ВВедите a b" << endl;
		cin >> a >> b;
		cout << "a=" << a << " b=" << b << endl;
		return squarePr(a, b);
	}
	else if (x == 2) {
		double a, h;
		cout << "ВВедите a h" << endl;
		cin >> a >> h;
		cout << "a=" << a << " h=" << h << endl;
		return squareTr(a, h);
	}
	else if (x == 3) {
		double r;
		cout << "ВВедите r" << endl;
		cin >> r;
		cout << "r=" << r << endl;
		return squareCir(r);
	}
	else {
		cout << "Вы ничего не выбрали";
	
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 65001");
	cout << "Если хотите площадь прямоугольника введите 1" << endl;
	cout << "Если хотите площадь треугольник введите 2" << endl;
	cout << "Если хотите площадь круга введите 3" << endl;
	int x;
	cin >> x;
	double ans=num(x);
	cout <<"S="<<ans;
	

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
