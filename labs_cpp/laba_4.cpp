#include<iostream>
#include"laba_4.h"

using namespace std;

int laba_4() {
	setlocale(0, "");

	double N, F, b, c, y, x, e, a = 0, S = 0, i = 1;

	cout << "1) ¬ведите N: ";
	cin >> N;
	F = b = 1;
	while (F < N + 1) {
		c = F + b;
		F = b;
		b = c;
	}
	cout << "первое число F, болшее N: " << F << endl;


	cout << "\n2) ¬ведите е: ";
	cin >> e ;
	S = a;
	while (abs(1/i) > e) {
		S += pow(-1, i + 1) * 1 / i;
		i++;
	}
	cout << "S: " << S << endl;

	cout << "\n3) ¬ведите длинну шага N: ";
	cin >> N;
	a = -2;
	b = 1.5;
	e = 2.71;
	x = a;
	while (x >= a && x <= b) {
		y = pow(e, x) + pow(x - 1, 2);
		cout << "x = " << x << " | y = " << y << endl;
		x += 2 / N;
	}

	double y0, y1;
	cout << "\n4) ¬ведите X, e: ";
	cin >> x >> e;
	y0 = a;
	y1 = y0;
	while (1>0) {
		a = (1 / 2) * (y0 + (x / y0));
		i++;
		if (abs(pow(y1, 2) - pow(y0, 2)) < e) break;
	}
	cout << y1 << endl;

	

	system("pause");
	return 0;
}