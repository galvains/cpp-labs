#include<iostream>
#include"laba_6.h"
#include"cmath"

using namespace std;

int laba_6() {
	setlocale(0, "");

	float n, b, count = 0, sum = 0;
	cout << "1) ������� n: ";
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
	cout << "����� = " << sum << " | ���-��: " << count << endl;
	
	cout << "\n2) ������� n: ";
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
	cout << "��� - ��: " << count << endl;

	cout << "\n3) ������� n: ";
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

	float S, F, x, y, e, m, h;
	int a = 0, b = 2, fact = 1;
	cout << "\n���) ������� x: ";
	cin >> x >> m;
	e = 2.71;
	S = 0;
	h = (b - a) / m;
	for (int i = 0; i < m; i++) {
		x = a + i * h;
		fact *= i;
		for (int j = 0; j < m; j++) {
			S += (pow(x, i) / fact);
		}
		y = pow(e, x);
	}
	cout << "����� = " << S << endl;

	system("pause");
	return 0;
}