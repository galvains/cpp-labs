#include<iostream>
#include<fstream>
#include"laba_12.h"
#include<vector>
#include<string>
 
using namespace std;

int laba_12() {
	setlocale(0, "");
	
	ofstream fout;
	fout.open("filek.txt");
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла..." << endl;
	}
	else {
		cout << "1) введи 5 цифр: ";
		for (int i = 0; i < 5; i++) {			
			int a;
			cin >> a;
			fout << a;
			fout << " ";
		}
	}
	fout.close();	
	ifstream fin;
	vector<int> numbers{};
	fin.open("filek.txt");
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла..." << endl;
	}
	else {
		cout << "Файл открыт..." << endl;
		int dig;
		while (!fin.eof() && fin >> dig) {
			numbers.push_back(dig);
			cout << dig << " ";
		}
	}
	fin.close();
	bool sorted = true;
	for (int i = 0; i < 5 - 1; i++) {
		if (numbers[i] > numbers[i + 1]) {
			sorted = false;
			break;
		}
	}
	if (sorted) {
		cout << "\nОтсортирован" << endl;
	}
	else {
		cout << "\nНе отсортирован" << endl;
	}

	cout << "\n2) " << endl;
	string msg;
	ifstream f;
	ofstream g;
	f.open("f.txt");
	g.open("g.txt");
	if (!f.is_open()) {
		cout << "Ошибка открытия файла..." << endl;
	}
	else {
		cout << "Файл открыт..." << endl;
		while (!f.eof()) {
			msg = "";
			getline(f, msg);
			for (int i = 0; msg[i]; i++)
				if ((msg[i] == 'C')&& (msg[i+1] != '+')) {
					msg.replace(i, 1, "C++");
				}
			g << msg << endl;
		}
	}
	f.close();
	g.close();

	cout << "\nинд А) " << endl;
	ifstream infile;
	ofstream outfile;
	infile.open("InputFile_A.txt");
	outfile.open("OutputFile_A.txt");
	if (!infile.is_open()) {
		cout << "Ошибка открытия файла..." << endl;
	}
	else {
		cout << "Файл открыт..." << endl;
		while (!infile.eof()) {
			msg = "";
			getline(infile, msg);
			for (int i = 0; msg[i]; i++)
				if (msg[i] == ',') {
					msg.replace(i+1,1,"");
				}
			outfile << msg << endl;
		}
	}
	infile.close();
	outfile.close();

	cout << "\nинд Б) " << endl;
	ifstream a;
	ifstream b;
	ofstream c;
	a.open("a.txt");
	b.open("b.txt");
	c.open("c.txt");
	if (!a.is_open() || !b.is_open()) {
		cout << "Ошибка открытия файла..." << endl;
	}
	else {
		cout << "Файл открыт..." << endl;
		int num1, num2, sum = 0;
		while (a >> num1 && b >> num2) {
			sum = (num1 + num2);
			c << sum << endl;
		}

	}
	a.close();
	b.close();
	c.close();

	system("pause");
	return 0;
}