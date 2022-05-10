#include<iostream>
#include"laba_8.h"
#include<ctime>
#include<vector>

using namespace std;

int laba_8() {
	setlocale(0, "");
	srand(time(NULL));

	const int M = 3, N = 5;	
	cout << "1) \n"; 
	int arr[M][N]{};
	int min = arr[0][0], max = arr[0][0];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = rand() % 99;
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
			else if (arr[i][j] < min) {
				min = arr[i][j];
			}
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nmin = " << min << " | max = " << max << endl;

	//-----------------------------------------------------------------------------------------	

	int sum = 0, pr = 1;
	cout << "\n2) ";
	int arr2[M][N]
	{
		{1,2,5,3,8},
		{5,2,7,4,1},
		{4,9,2,3,1}
	};

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			sum += arr2[i][j];
		}
		pr *= sum;
	}
	cout << "произведение = " << pr << endl;

	//-----------------------------------------------------------------------------------------	

	int n, m;
	cout << "Введите кол-во строк матрицы: ";
	cin >> n;
	cout << "Введите кол-во столбцов матрицы: ";
	cin >> m;
	int matr[20][20];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matr[i][j] = rand() % 15;
		}
	}
	cout << "\nМатрица №1: ";
	for (int i = 0; i < n; i++) {
		cout << endl;
		for (int j = 0; j < m; j++) {
			cout << matr[i][j] << "\t";
		}
	}
	int Row, Col;
	cout << "\nВведите кол-во строк второй матрицы: ";
	cin >> Row;
	while (Row != n) {
		cout << "Кол-во строк должно быть как в 1!\n";
		cout << "\nВведите кол-во строк второй матрицы: ";
		cin >> Row;
	}
	cout << "Введите кол-во колонок 2й матрицы:";
	cin >> Col;
	int matr2[20][20];
	cout << "\nМатрица № 2";
	for (int i = 0; i < Row; i++) {
		cout << endl;
		for (int j = 0; j < Col; j++) {
			matr2[i][j] = rand() % 9;
			cout << matr2[i][j] << "\t";
		}
	}
	int matr3[20][20];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < Col; j++) {
			matr3[i][j] = 0;
			for (int z = 0; z < Row; z++) {
				matr3[i][j] = matr3[i][j] + matr[i][z] * matr2[z][j];
			}
		}
	}
	cout << "\n\nОтвет:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < Col; j++) {
			cout << matr3[i][j] << "\t";
		}
		cout << endl;
	}

	//-----------------------------------------------------------------------------------------	

	int arr_X[3]{};
	cout << "\n4) ";
	int arr3[M][N]
	{
		{6,3,5,3,5},
		{4,2,7,5,0},
		{4,0,2,7,1}
	};
	sum = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			sum += arr3[i][j];
		}
		arr_X[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < M; i++) {
		cout << arr_X[i] << " ";
	}
	cout << endl;

	//-----------------------------------------------------------------------------------------	

	int arr_min[3]{};
	cout << "\n5) ";
	int arr4[M][N]
	{
		{5,2,5,2,4},
		{1,7,7,3,4},
		{6,9,0,3,3}
	};
	min = arr4[0][0];
	max = arr_min[0];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr4[i][j] < min) {
				min = arr4[i][j];
			}		
		}
		arr_min[i] = min;
	}

	for (int i = 0; i < M; i++) {
		if (arr_min[i] > max) {
			max = arr_min[i];
		}
		cout << arr_min[i] << " ";
	}
	cout << "max = " << max << endl;

	//-----------------------------------------------------------------------------------------	

	cout << "\nинд) А)\n";
	int arr6[4][4]
	{
		{0,2,5,0},
		{1,7,7,0},
		{6,0,0,3},
		{1,7,7,3}
	};
	int count = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i == j || (i + j == 3)) && (arr6[i][j] == 0)) {
				count++;
			}		
			cout << arr6[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "count = " << count <<  endl;

	//-----------------------------------------------------------------------------------------	

	cout << "Введите кол-во столбцов матрицы: ";
	cin >> n;
	cout << "\nБ) Исходный:\n";
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			arr[i][j] = rand() % 10;
			cout << arr[i][j]<< "\t";
		}
		cout << "\n";
	}
	if (n % 2 == 0) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; j += 2) {
				swap(arr[i][j], arr[i][j + 1]);
			}
		}
	}
	else {
		for (int i = 0; i < n-1; ++i) {
			for (int j = 0; j < n-1; j += 2) {
				swap(arr[i][j], arr[i][j + 1]);
			}
		}
	}
	cout << "Ответ:\n";
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}