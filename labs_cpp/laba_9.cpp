#include<iostream>
#include"laba_9.h"
#include<cmath>

using namespace std;

double f1(double a, double b) {
	return (pow(a, 2) + pow(b, 2)) / (pow(a, 2) + 2 * a * b + 3 * pow(b, 2) + 4);
}
double f2(double sum, double i) {
	return sum / i;
}
double Factorial(double numb){
	double res = 1;
	for (double i = numb; i > 1; i--) {
		res *= i;
	}
	return res;
}
double Power1(double x, double a, double eps) {

	double n = 0;
	double sum = 0;
	double d = 1;
	do {	
		sum += + d; 
		n++; 
		d *= (a - n + 1) * pow(x,n) / Factorial(n);
	} while (abs(d) > eps);
	return sum;
}	
double f4(double x, int n) {
	double sum = 0;
	for (int k = 0; k < n; k++) {
		sum += (pow(x, 2 * k + 1) / Factorial(2 * k + 1)) / (pow(x, 2 * k) / Factorial(2 * k));
	}
	return sum;
}
float Calc(int A, int B, int Op) {
	if (Op == 1) {
		return A - B;
	}
	else if (Op == 2) {
		return A * B;
	}
	else if (Op == 3) {
		return A / B;
	}
	else {
		return A + B;
	}
}
int neg(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int con(int x, int y) {
	if (x == 1 && y == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
int dis(int x, int y) {
	if (x == 0 && y == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int impl(int x, int y) {
	if (x == 1 && y == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int equiv(int x, int y) {
	if (x == y) {
		return 1;
	}
	else {
		return 0;
	}
}
int add(int x, int y) {
	if ((x == 1 && y == 0) || (x == 0 && y == 1)) {
		return 1;
	}
	else {
		return 0;
	}
}
int NOR(int x, int y) {
	if (x == 0 && y == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int F(int x1, int x2, int x3) {
	return dis(dis(neg(x1), x2), dis(x1, x3));
}
int G(int x1, int x2, int x3) {
	return con(dis(x2, x1), dis(x1, neg(x3)));
}
//----------------------------------------------------------------------

int laba_9() {
	setlocale(0, "");

	int c, s, t;
	double res;
	cout << "1) Введите c, s, t: "; cin >> c >> s >> t;
	res = f1(1.2, c) + f1(t, s) - f1(2 * s - 1, s * t);
	cout << res << endl;

	int arr[5]{ 5,2,3,7,5 }, sum = 0, count = 0;
	cout << "\n2) ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		count++;
	}
	cout <<"\nsr_arifm = " << f2(sum, count) << endl;

	double x, a, eps;
	cout << "\n3) Введите x, a, eps: "; cin >> x >> a >> eps;
	if (x == 0){
		x = 1;
		cout << "Ответ = " << x << endl;
	}
	else if (abs(x) < 1){
		for (int i = 0; i < 6; i++){
			if (eps > 0 && a > 0){
				cout << "Ответ " << i+1 <<") " << Power1(x, a, eps) << endl;
			}
			else {
				cout << "eps и a должны быть больше 0!" << endl;
			}
		}
	}
	else{
		cout << "Модуль x должен быть < 1" << endl;
	}

	int y, n;
	res = 0;
	cout << "\n4) Введите x, y, n: "; cin >> x >> y >> n;
	res = (1.7 * f4(0.25, n) + 2 * f4(1 + y, n)) / (6 - f4(pow(y, 2) - 1, n));
	cout << "\nsum = " << res << endl;

	int A, B, Op;
	cout << "\nинд) Введите A, B, Op(1-выч, 2-умн, 3-дел, ост.-слож): " << endl;
	cin >> A >> B >> Op;
	cout << "\nОтвет: " << Calc(A, B, Op) << endl;

	cout << "\nинд 2)" << endl;
	int x1 = 0, x2 = 0, x3 = 0;
	for (int i = 0; i < 8; i++) {
		switch (i){
		case 0:x1 = 0; x2 = 0; x3 = 0; break;
		case 1:x1 = 0; x2 = 0; x3 = 1; break;
		case 2:x1 = 0; x2 = 1; x3 = 0; break;
		case 3:x1 = 0; x2 = 1; x3 = 1; break;
		case 4:x1 = 1; x2 = 0; x3 = 0; break;
		case 5:x1 = 1; x2 = 0; x3 = 1; break;
		case 6:x1 = 1; x2 = 1; x3 = 0; break;
		case 7:x1 = 1; x2 = 1; x3 = 1; break;
		}
		cout  << i << ") " << F(x1, x2, x3) << " | " << G(x1, x2, x3) << endl;
	}

	system("pause");
	return 0;
}