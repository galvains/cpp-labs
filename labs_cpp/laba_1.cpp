#include "laba_1.h"
#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
};

int laba_1() {

	float N = 6, a, b, c, d, x, R, r, tmp;

	cout << "1)\n����� ������� ��������, 05.12.03" << endl;
	cout << "�����\n�������\n��������\n05.12.03" << endl;

	cout << "\n2) ������� X: ";
	cin >> x;
	a = x + N;
	b = x - N;
	c = x * N;
	d = x / N;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

	int sredn = (a + b + c) / 3;
	cout << "\n3) ������� �������������� a,b,c = " << sredn << endl;


	cout << "\n4) ������� R � r (R > r): ";
	cin >> R >> r;
	double P = 3.14159265, S;
	S = P * (pow(R, 2) - pow(r, 2));
	cout << "������� ������ = " << S << endl;

	int sec, h = 10, m = 15, s = 33;
	cout << "\n5) �����: " << h << "." << m << "." << s << endl;
	sec = s + m * 60 + h * 60 * 60;
	cout << "� ��������: " << sec << endl;


	cout << "\n6) a ����� b: " << a << "," << b << endl;
	tmp = a;
	a = b;
	b = tmp;
	cout << "   a ����� b: " << a << "," << b << endl;

	cout << "\n7) ������� ������: ";
	cin >> m;
	h = m / 60;
	int min = (m - h * 60);
	cout << h << " ����� " << min << " �����" << endl;

	int k, n, y;

	cout << "\n8) ������� k, m, n, x: ";
	cin >> k >> m >> n >> x;
	y = 2 * (pow(k, 2) / 2) + (x / 3) + (m % n);
	cout << "y = " << y << endl;


	cout << "\n9) ������� X: ";
	cin >> x;
	float res_9 = 1 - 2 * x + 3 * (x * x) - 4 * (x * x * x);
	cout << "�����: " << res_9 << endl;

	cout << "\n10) ������� X: ";
	cin >> x;
	float res_10 = x / (1 + (pow(x, 2) / 2 + (pow(x, 3) / 3 + (pow(x, 4) / 4))));
	cout << "�����: " << res_10 << endl;

	cout << "\n11) ������� X: ";
	cin >> x;

	int(*fact)(int n);
	fact = factorial;

	float res_11a = 1 - x + (pow(x, 2) / fact(2)) - (pow(x, 3) / fact(3)) + (pow(x, 4) / fact(4)) - (pow(x, 5) / fact(5));
	float res_11b = x - (pow(x, 3) / fact(3)) + (pow(x, 5) / fact(5)) - (pow(x, 7) / fact(7)) + (pow(x, 9) / fact(9));
	cout << "����� A: " << res_11a << "\n����� B: " << res_11b << endl;

	//------------------------------------------------------------------------

	int a1, a2, b1, b2, c1, c2, D, Dx, Dy;
	cout << "\n12) ������� a1, a2, b1, b2, c1, c2: ";
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	D = a1 * b2 - a2 * b1;
	Dx = c1 * b2 - c2 * b1;
	Dy = a1 * c2 - a2 * c1;
	x = Dx / D;
	y = Dy / D;
	cout << "x = " << x << ", y = " << y << endl;

	//------------------------------------------------------------------------

	cout << "\n��������������) ������� a, x, y: ";
	cin >> a >> x >> y;
	double e = 2.71, z1, z2, F;
	z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	z2 = 4 * cos(a / 2) * cos(2.5 * a) * cos(4 * a);
	F = pow(e, x + y) + log10(sin(x));
	cout << "z1 = " << z1 << ", z2 = " << z2 << ", F = " << F << endl;

	system("pause");
	return 0;
	
};

