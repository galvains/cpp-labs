#include<iostream>
#include"laba_11.h"
#include<string>
#include <algorithm>
#include <typeinfo>

using namespace std;

int laba_11() {
	setlocale(0, "");

	string f1;
	cout << "1) введи строку: "; cin >> f1;
	reverse(f1.begin(), f1.end());
	cout << "длина: " << f1.length() << " | реверс: " << f1 << endl;

	string f2;
	int x, res;
	cout << "\n2) encoding \nвведи строку: "; cin >> f2;
	cout << "введи ключ: "; cin >> x;
	for (int i = 0; i < f2.length(); i++) {
		res = (int)f2[i];
		res += x;
		cout << (char)res << "  ";
	}
	cout << "\n\ndecoding \nвведи строку: "; cin >> f2;
	cout << "введи ключ: "; cin >> x;
	for (int i = 0; i < f2.length(); i++) {
		res = (int)f2[i];
		res -= x;
		cout << (char)res << "  ";
	}

	cout << "\n3) введи строку: "; cin >> f2;
	sort(f2.begin(), f2.end());
	auto last = unique(f2.begin(), f2.end());
	f2.erase(last, f2.end());
	cout << f2 << endl;

	cout << "\n4) инициалы (y, g, i) введи строку: "; cin >> f2;
	//bool g = false, y = false, i = false;
	int count = 0;
	for (int i = 0; i < f2.length(); i++) {
		if (f2[i] == 'g') {
			count++;
		}
		else if (f2[i] == 'y') {
			count++;
		}
		else if (f2[i] == 'i') {
			count++;
		}
	}
	if (count == 3) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	char s1[256], s2[256];
	cout << "\nинд) введи строку: "; cin >> f2;
	for (int i = 0; i < f2.length() / 2; i++) {
		s1[i] = f2[i];
		s2[i] = f2[f2.length() / 2 + i];
	}
	s1[f2.length() / 2] = '\0';
	if (f2.length() % 2 == 0) {
		s2[f2.length() / 2] = '\0';
	}
	else { 
		s2[f2.length() / 2] = f2[f2.length() - 1]; 
		s2[f2.length() / 2 + 1] = '\0'; 
	}
	cout << "s1 = " << s1 << "\ns2 = " << s2 << endl;

	cout << "\nинд) введи строку: "; cin >> f2;
	count = 0;
	for (int i = 0; i < f2.length(); i++) {
		if (isalpha(f2[i]) && isupper(f2[i])) {
			count++;
		}
	}
	cout << "count = " << count << endl;

	system("pause");
	return 0;
}