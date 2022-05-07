#include<iostream>
#include"laba_4.h"

using namespace std;

int laba_4() {
	setlocale(0, "");
	
	double N, F, b, c, y, x, e, a = 0, S = 0, i = 1;

	cout << "1) Введите N: ";
	cin >> N;
	F = b = 1;
	while (F < N + 1) {
		c = F + b;
		F = b;
		b = c;
	}
	cout << "первое число F, болшее N: " << F << endl;


	cout << "\n2) Введите е: ";
	cin >> e ;
	S = a;
	while (abs(1/i) > e) {
		S += pow(-1, i + 1) * 1 / i;
		i++;
	}
	cout << "S: " << S << endl;

	cout << "\n3) Введите длинну шага N: ";
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


	double y1, y2;

	cout << "\n4) Введите a, x, e: ";
	cin >> a >> x >> e;
	y1 = a;
	y2 = 0.5 * (y1 + (x / y1));
	while (abs(pow(y2, 2) - pow(y1, 2)) >= e) {
		y1 = y2;
		y2 = 0.5 * (y1 + (x / y1));	
	}
	cout << "элемент: " << y2 << endl; 

	int count = 0,n;
	cout << "\n5) Введите число: ";
	cin >> n;
	S = 0;
	while (n != 0) {
		S += n % 10;
		n /= 10;
		count++;
	}
	cout << "кол-во: " << count << " | сумма: " << S << endl;

	cout << "\n6) Введите  e: ";
	cin >> e;
	a = sqrt(2.), y2 = 0, y1 = 2 / a;

	while (abs(y1 - y2) > e) {
		y2 = y1;
		a = sqrt(a + 2);
		y1 = y2*2/a;
	}
	cout << "элемент: " << y1*2 << endl;


	int i_chet = 2, i_nechet = 1, f;
	cout << "\nинд) Введите n: ";
	cin >> n;
	f = 1;
	if (n % 2 == 0) {
		while (i_chet <= n) {
			f *= i_chet;
			i_chet  = i_chet + 2;
		}
	}
	else {
		while (i_nechet <= n) {
			f *= i_nechet;
			i_nechet = i_nechet + 2;
		}
	}

	cout << "Факториал: " << f << endl;

	system("pause");
	return 0;
}