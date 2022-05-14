#include<iostream>
#include"laba_1.h"
#include"laba_2.h"
#include"laba_3.h"
#include"laba_4.h"
#include"laba_5.h"
#include"laba_6.h"
#include"laba_7.h"
#include"laba_8.h"
#include"laba_9.h"
#include"laba_10.h"
#include"laba_11.h"
#include"laba_12.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int number;
	int res;
	cout << "¬ведите є лабораторной работы: "; cin >> number;

	switch (number) {
		case 1:res = laba_1(); break;
		case 2:res = laba_2(); break;
		case 3:res = laba_3(); break;
		case 4:res = laba_4(); break;
		case 5:res = laba_5(); break;
		case 6:res = laba_6(); break;
		case 7:res = laba_7(); break;
		case 8:res = laba_8(); break;
		case 9:res = laba_9(); break;
		case 10:res = laba_10(); break;
		case 11:res = laba_11(); break;
		case 12:res = laba_12(); break;
	}
		
	cout << res << endl;

	system("pause");
	return 0;
}