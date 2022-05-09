#include<iostream>
#include"laba_6.h"
#include"cmath"

using namespace std;

int laba_6() {
	setlocale(0, "");

	float n, b, count = 0, sum = 0;
	cout << "1) Введите n: ";
	cin >> n;
	b = n * 2;
	for (int i = n; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
				sum += j;
			}
		}
	}
	cout << "сумма = " << sum << " | кол-во: " << count << endl;
	
	cout << "\n2) Введите n: ";
	cin >> n;
	int a = ceil(n) + 5;
	count = 0;
	for (int x = -a; x <= a; x++) {
		for (int y = -a; y <= a; y++) {			
			if (x * x + y * y <= n * n) {
				count++;
				if (x >= 0 && y >= 0) {
					cout << "x = " << x << " | y = " << y << endl;
				}
			}
		}
	}
	cout << "кол - во: " << count << endl;

	cout << "\n3) Введите n: ";
	cin >> n;
	count = 0;
	for (int i = 1; i * i <= n; i++) {
		for (int j = i; i * i + j * j <= n; j++) {
			if ((i * i + j * j) == n) {
				cout << "N = " << i << "^2 + " << j << "^2" << endl;
				count++;
			}
		}
	}
	if (count == 0) {
		cout << "false" << endl;
	}

	double x, y, eps, m, h, S, res = 0, fact = 1, e = 2.71;
	a = 0; b = 2;
	cout << "\n Введите eps, m: "; cin >> eps >> m;
	h = (b - a) / m;
	for (int i = a; i <= b; i++) {
		x = a + i * h;
		y = pow(e, x);		
		for (int j = 0; j <= m; j++) {		
			fact *= j;
			S = pow(x, j) / fact;
			if (S > eps && S > y) {
				res += S;
			}	
		}
		cout << "x = " << x << " | S = " << res << " | y = " << y << endl;
	}

	a = 0; b = 3.14;
	cout << "\n Введите eps, m: "; cin >> eps >> m;
	h = (b - a) / m;
	for (int i = a; i <= b; i++) {
		x = a + i * h;
		y = cos(x);

		for (int j = 0; j <= m; j++) {

			fact *= j*2;
			S = pow(-1, j) * (pow(x, 2 * n)/2);
			if (S > eps && S > y) {
				res += S;
			}

		}
		cout << "x = " << x << " | S = " << res << " | y = " << y << endl;
	}




	system("pause");
	return 0;
}