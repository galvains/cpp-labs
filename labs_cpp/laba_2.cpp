#include"laba_2.h"
#include<iostream>
#include <cmath>
using namespace std;

int laba_2() {
	setlocale(0, "");

	int a = 1, b = 0, c = 0;

	cout << "3) " << "a)" << !(a && b) << " б)" << (a || !b) << " в)" << ((a && b) || c) 
		 << "\n   г)" << ((a && b) || !c) << " д)" << (!a && !b) << " е)" << (!(a && c) || b) 
		 << "\n   ж)" << ((a && !b) || c) << " з)" << (a && (!b || c)) << " и)" << (a || (!(b & c))) << endl;

	int y1, y2, y3, y4, y5, y6, k = 2, r = 3, E = 4, y = 3, x = 1;
	y1 = pow(a, k) + 1 > pow(2 + c, r);
	y2 = abs(1 - b) < E;
	y3 = 0 < x < 1;
	y4 = (x >= 0) || (y >= 0);
	y5 = (((x + 1) <= y) && (pow(x, 2) + pow(y, 2))) > 1;
	y6 = (pow(x, 2) + pow(y, 2) > 1) || ((x + y) > 1) && (pow(x, 2) + pow(y, 2) > x * y);
	cout << "\n4) " << y1 << ", " << y2 << ", " << y3 
		 << ", " << y4 << ", " << y5 << ", " << y6 << endl;

	cout << "\n5) Введите Х: ";
	cin >> x;
	int res_5a, res_5b, res_5v;
	(x > 0) ? (res_5a = x) : (res_5a = ~(x - 1)); //а
	(a > b) ? (res_5b = a) & (res_5v = 1) : (res_5b = b) & (res_5v = 1);//б и в
	(x < y) ? (x = 0) : (y = 0);//г
	cout << "a)y = " << res_5a << " б)большее " << res_5b << " в) " << res_5v << " г)x = " << x << " y = " << y << endl;

	cout << "\n7) Введите a, x, y: ";
	cin >> a >> x >> y;
	int z1, z2, z3, z4, z5, z6, z7, z8, z9, z10;
	float e = 2.71;
	(x != 0) ? (y1 = sin(x) / x) : (y1 = 1);
	(x != 0) ? (y2 = pow(1 + x, 1 / x)) : (y2 = e);
	(x <= 0) ? (y3 = pow(cos(x), 2)) : (pow(e, -x) * sin(2 * x) + abs(x));
	(1 <= x <= 2) ? (y4 = log10(x)) : (y4 = 1 - pow(a, pow(x, 2)));
	(0 <= x <= 1) ? ((x < 2 * y) ? (z1 = x) : (z1 = 2 * y)) : ((x * 2 > y) ? (z1 = x * 2) : (z1 = y));
	(x > y) ? (z2 = x - y) : (z2 = y - x + 1);
	(pow(x, 2) + pow(y, 2) <= 1) ? (z3 = ((a * x + b) / pow(x, 2) + pow(y, 2) + 4) + 1) : (z3 = ((a * b * x * y) / pow(x, 2) + pow(y, 2) + 4) - pow(x, 3));
	(a * x >= 0) ? (z4 = (2 * a * x) / pow(x, 2) + 3) : (z4 = (a + b) / 4 * (pow(x, 2) + 2));
	cout << "y1 = " << y1 << " | y2= " << y2 << " | y3 = " << y3 << " | y4 = " << y4 << "\nz1 = " << z1 << " | z2= " << z2 << " | z3 = " << z3 << " | z4 = " << z4 << endl;

	
	cout << "\n8) Введите x, y, r, R, a: ";
	int R;
	cin >> x >> y >> r >> R >> a;
	((abs(x) < r) && (abs(y) < r)) ? (z1 = 1) : (z1 = 0);
	((abs(x) > r) && (abs(y) > r)) ? (z2 = 1) : (z2 = 0);
	((abs(x) < R) && (abs(y) < R) && (abs(x) > r) && (abs(y) > r)) ? (z3 = 1) : (z3 = 0);
	(x >= 0) ? (((abs(x) < R) && (abs(y) < R) && (abs(x) > r) && (abs(y) > r)) ? (z4 = 1) : (z4 = 0)) : (z4 = 0);
	((x >= 0) && (y >= 0)) ? (z5 = 1) : (z5 = 0);
	((x >= 0) && (y >= 0) && (y == x || y < x)) ? (z6 = 1) : (z6 = 0);
	((x >= 0) && (y >= 0) && ((abs(x) < R) && (abs(y) < R) && (abs(x) > r) && (abs(y) > r)) && (y == 2 * x || y < 2 * x)) ? (z7 = 1) : (z7 = 0);
	((x >= 0) && (y >= 0) && ((abs(x) < R) && (abs(y) < R) && (abs(x) > r) && (abs(y) > r))) ? (z8 = 1) : (z8 = 0);
	((abs(r) >= x <= 0) && (abs(r) >= y <= 0)) ? (z9 = 1) : (z9 = 0);
	((abs(x) > a) && (abs(y) > a)) ? (z10 = 1) : (z10 = 0);


	cout << z1 <<"," << z2 << "," << z3 << "," << z4 << "," << z5 
	<< "," << z6 << "," << z7 << "," << z8 << "," << z9 << "," << z10 << endl;

	/*
	((x < r) && (y < r)) ? (z1 = 1) : (z1 = 0);
	((x > r) && (y > r)) ? (z2 = 1) : (z2 = 0);
	((x < R) && (y < R) && (x && y) > r) ? (z3 = 1) : (z3 = 0);
	((x && y) < R && (x && y) > r) ? (z4 = 1) : (z4 = 0);
	(x > 0) ? (((x && y) < R && (x && y) > r) ? (z5 = 1) : (z5 = 0)) : (z5 = 0);
	(x && y > 0) ? (z6 = 1) : (z6 = 0);
	cout << z1 << endl;
	*/

	int A, B, C, res;
	cout << "\nинд) Введите A, B, C: ";
	cin >> A >> B >> C;
	(A < B < C) ? (res = 1) : (res = 0);
	cout << "а) " << res << endl;

	cout << "\nВведите x, y: ";
	cin >> x >> y;
	((x < 0) && (y > 0)) ? (res = 1) : (res = 0);
	cout << "б) " << res << endl;


	system("pause");
	return 0;
}