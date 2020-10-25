// umnozhmatric.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sellers[3][4] = {
	{5,2,0,10},
	{3,5,2,5},
	{20,0,0,0}
	};
	double prices[4][2] = {
		{1.20,0.50},
		{2.80,0.40},
		{5.00,1.00},
		{2.00,1.50}
	};
	float C[3][2];
	for (int i = 0; i < 3; i++) {// 3 и 2 размеры новой матрицы
			for (int j = 0; j < 2; j++) {
				C[i][j] = 0;
				for (int k = 0; k < 4; k++) //4 число по которому пересекаются матрицы
					C[i][j] += sellers[i][k] * prices[k][j];
			}
	}
	//1 вопрос
	float max_summsell;
	int max_summsell_id;
	
	if (C[0][0] > C[1][0]){
		max_summsell = C[0][0];
		max_summsell_id=1;
	}
	else {
		max_summsell = C[1][0];
		max_summsell_id = 2;
	}
	if (C[2][0] > max_summsell) {
		max_summsell = C[2][0];
		max_summsell_id = 3;
	}
	

	float min_summsell;
	int min_summsell_id;

	if (C[0][0] < C[1][0]) {
		min_summsell = C[0][0];
		min_summsell_id = 1;

	}
	else {
		min_summsell = C[1][0];
		min_summsell_id = 2;
	}
	if (C[2][0] < min_summsell) {
		min_summsell = C[2][0];
		min_summsell_id = 3;
	}

	//2 вопрос 
	float max_summfee;
	int max_summfee_id;

	if (C[0][1] > C[1][1]) {
		max_summfee = C[0][1];
		max_summfee_id = 1;
	}
	else {
		max_summfee = C[1][1];
		max_summfee_id = 2;
	}
	if (C[2][1]> max_summfee) {
		max_summfee = C[2][1];
		max_summfee_id = 3;
	}
	float min_summfee;
	int min_summfee_id;

	if (C[0][1] < C[1][1]) {
		min_summfee = C[0][1];
		min_summfee_id = 1;

	}
	else {
		min_summfee = C[1][1];
		min_summfee_id = 2;
	}
	if (C[2][1] < min_summfee) {
		min_summfee = C[2][1];
		min_summfee_id = 3;
	}
	//3 вопрос
	float summ_sell;
	summ_sell = C[0][0] + C[1][0] + C[2][0];
	//4 вопрос
	float summ_fee;
	summ_fee = C[0][1] + C[1][1] + C[2][1];
	//5 вопрос
	float total_summ;
	total_summ = summ_sell + summ_fee;
	cout<< "№ \t" << "Выручка \t" << "Комиссионные \t" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "\t";
		for (int j = 0; j < 2; j++)
			cout << C[i][j] << "\t \t";
		cout << endl;
	}
	cout << "Продавец №" << max_summsell_id << " выручил больше всего денег с продажи, №" << min_summsell_id << " - меньше всего" << endl;
	cout << "Продавец №" << max_summfee_id << " получил наибольшие комиссионные, №" << min_summfee_id << " - наименьшие" << endl;
	cout << "Общая сумма вырученных денег равна: " << summ_sell << "" << endl;
	cout << "Продавцы в сумме получили " << summ_fee << " комиссионных" << endl;
	cout << "Общая сумма, прошедших через руки продавцов: " << total_summ;
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
