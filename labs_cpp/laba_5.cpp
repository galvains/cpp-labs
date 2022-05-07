#include<iostream>
#include"laba_5.h"
#include"cmath"
using namespace std;

int laba_5() {
	setlocale(0, "");

	double x, a, b, m;
	int N;
	cout << "1) Введите N: ";
	cin >> N;
	for (int i = 2; i <= (sqrt(abs(N))); i++) {
		if (N % i == 0) {
			cout << "не простое" << endl;
			break;
		}
		else {
			cout << "простое" << endl;
			break;
		}
	}

	cout << "\n2) Введите N: ";
	cin >> N;
	double res = 1;
	for (int i = 1 ; i <= N; i++) {
		res *= i;
	}
	cout << "факториал = " << res << endl;

	cout << "\n3) Введите N, x: ";
	cin >> N >> x;
	a = sin(x);
	res = a;
	for (int i = 1; i <= N; i++) {
		res = res + i * sin(x);
	}
	cout << "ответ = " << res << endl;

	cout << "\n4) Введите x (!=0): ";
	cin >> x;
	res = 1;
	for (int i = 7; i > 0; i--) {
		res = (x * x + pow(2, i) / (x * x)) / res;
	}
	res = x / res;
	cout << "ответ = " << res << endl;

	cout << "\n5) Введите x (!=0), N: ";
	cin >> x >> N;
	res = 0;
	int fact = 1, D;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			D = 1;
		}
		else { D = 0; }
		fact *= i;
		res += (pow(x,i)/fact)*(i + pow(D,2));
	}
	cout << "ответ = " << res << endl;

	cout << "\nинд 1) Введите X: ";
	cin >> x;
	float pi = 3.1415, h, y;
	a = pi/4;
	b = pi/2;
	m = 10;
	h = (b - a) / m;
	for (int i = 0; i <= m; i++) {
		y = cos(x)+(cos(x)/sin(x));
		cout << "x = " << x << " | y = " << y << endl;
		x += a + i * h;
	}

	float A;
	cout << "\nинд 2) Введите A, N (>0): ";
	cin >> A >> N;
	res = 1;
	for (int i = 0; i < N; i++) {
		res *= A;
	}
	cout << "ответ = " << res << endl;


	system("pause");
	return 0;
}