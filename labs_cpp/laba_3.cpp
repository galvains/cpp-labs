#include<iostream>
#include"laba_3.h"
#include"cmath"
using namespace std;

int laba_3() {
	setlocale(0, "");
	
	double a, b, c, x;


	cout << "1) Ведите a, b, c (положительные): ";
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0) {
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b && a == c) {
				cout << "равносторонный" << endl;
			}
			else if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2))) {
				cout << "прямоугольный" << endl;
			}
			else {
				cout << "равнобедренный" << endl;
			}
		}
		else {
			cout << "неверные данные" << endl;
		}
	}
	else {
		cout << "число должно быть больше 0!" << endl;
	}
	
	cout << "\n2)Введите a, b, c для ax^2+bx+c = 0: ";
	cin >> a >> b >> c;

	if ((b * b - 4 * a * c) >= 0) {
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x1 = " << x << endl;
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x2 = " << x << endl;
	}
	else {
		cout << "нет решений..." << endl;
	}

	int A1, A2, A3;
	cout << "\n3) Введите A1, A2, A3: ";
	cin >> A1 >> A2 >> A3;
	if (A1 > A2 && A1 > A3) {
		cout << A1 << " (индекс 0)" << endl;
	}
	else if (A2 > A1 && A2 > A3) {
		cout << A2 << " (индекс 1)" << endl;
	}
	else {
		cout << A3 << " (индекс 2)" << endl;
	}

	double y;
	cout << "\n4)Введите x: ";
	cin >> x;
	if (x < 0) {
		y = pow(pow(x, 3) + 1, 2);
		cout << "y = " << y << endl;
	}
	else if (0 <= x && x < 1) {
		y = 0;
		cout << "y = " << y << endl;
	}
	else if (1 <= x && x < 2) {
		y = x + 2;
		cout << "y = " << y << endl;
	}
	else if (x >= 2) {
		y = abs(pow(x, 2) - 5 * x + 1);
		cout << "y = " << y << endl;
	}
	else {
		cout << "нет решений..." << endl;
	}

	int r, R;
	cout << "\n5)Введите x, y, r, R: ";
	cin >> x >> y >> r >> R;
	if ((abs(x) < R) && (abs(y) < R) && (abs(x) > r) && (abs(y) > r)) { 
		cout << "true" << endl;
	}
	else { 
		cout << "false" << endl;
	};

	cout << "\nинд) Введите x, y: ";
	cin >> x >> y;
	if (x > y) {
		int tmp = x;
		x = y;
		y = tmp;
		cout << "x = " << x << " | y = " << y << endl;
	}
	else {
		cout << "x = " << x << " | y = " << y << endl;
	}
	

	int D, M;
	cout << "\nинд) Введите D, M: ";
	cin >> D >> M;
	switch (M) {
	case 1: {
		switch (D) {
		case 1:
			D = 31; M = 12;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 2: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 3: {
		switch (D) {
		case 1:
			D = 28; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 4: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 5: {
		switch (D) {
		case 1:
			D = 30; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 6: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 7: {
		switch (D) {
		case 1:
			D = 30; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 8: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	case 9: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	case 10: {
		switch (D) {
		case 1:
			D = 30; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	case 11: {
		switch (D) {
		case 1:
			D = 31; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	case 12: {
		switch (D) {
		case 1:
			D = 30; M = M - 1;
			break;

		default: D = D - 1;
			break;
		}
		break;
	}
	}
	}
	}
	}

	cout << D << "/" << M << endl;

	system("pause");
	return 0;
}
