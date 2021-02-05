﻿// balls.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int factorial(int n) { //функция подсчета факториала числа
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return n;
    }
}
int wrongVar(bool select[], int n, int step = 0) { //счиатем количество вариантов, где шары не совпадают с номером их вынимания
    int count = 0;//количество не совпадений
    if (step >= n) {
        count = 1;
    }
    else {
        for (int i = 0; i < n; i++) {
            if ((i != step) && !select[i]) {//если шар не совпадает с номером его вынимания, то меняем значение на true под соответствующим номером в массиве, счетчик теперь равен тому,что получим при рекурсивном вызове функции
                select[i] = true;
                count += wrongVar(select, n, step + 1);
                select[i] = false;
            }
        }
    }
    return count;
}
int main() {
    const int n = 10;
    bool match[n] = {};//инициализируем массив false-ами
    cout << factorial(n) - wrongVar(match,n) << endl; //вычитаем из количества всех вариантов те варианты, где не выпало ни одного нужного нам шара
    return 0;
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
