#include<iostream>
#include"laba_7.h"
#include<vector>

using namespace std;

int laba_7() {
	setlocale(0, "");


	int N;
	vector <int> arr;
	cout << "1) Введите N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		if (i < 2) { 
			arr.push_back(1);
		}
		else { 
			arr.push_back(arr[i - 2] + arr[i - 1]);
		}
		cout << arr[i] << " ";
	}
	cout << "" << endl;

	
	int arr2[6]{4,54,8,1,66,5};
	int min = arr2[0], max = arr2[0], sum;
	cout << "\n2) ";
	for (int i = 0; i < 6; i++) {
		if (arr2[i] > max) {
			max = arr2[i];
		}
		else if (arr2[i] < min) {
			min = arr2[i];
		}
		cout << arr2[i]<< " ";
	}
	sum = min + max;
	cout << "" << endl;
	cout << "sum = " << sum << endl;

	int arr3[6]{ 55,-3,8,0,-12,5 };
	int count = 0;
	cout << "\n3) ";
	for (int i = 0; i < 6; i++) {
		if (arr3[i] > 0) {
			arr3[i] = 1;
			count++;
		}
		else if (arr3[i] < 0) {
			arr3[i] = -1;
			count++;
		}
		cout << arr3[i] << " ";
	}
	cout << "\ncount = " << count << endl;

	const int n = 12;
	int ind1 = 0, ind2 = 0, min_abs = 10, A[n];
	cout << "\n4) ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 20 - 10;
		cout << A[i] << " ";
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(A[i] - A[j]) <= min_abs) {
				min_abs = abs(A[i] - A[j]);
				ind1 = i;
				ind2 = j;
		
			}
		}	
	}
	cout << "\nind1 = " << ind1 << " | ind2 = " << ind2 << endl;

	int arr5[6]{ 55,13,8,0,-1,5 };
	int count_min = 0;
	count = 0;
	min = arr5[0];
	cout << "\nинд) ";
	for (int i = 0; i < 6; i++) {
		if (arr5[i] != 0) {			
			count++;
		}
		if (arr5[i] < min) {
			min = arr5[i];
		}

		cout << arr5[i] << " ";
	}
	for (int i = 0; i < 6; i++) {
		if (arr5[i] != min) {
			count_min++;
		}
	}
	cout << "\ncount = " << count << "\nне совпадающие с min = " << count_min << endl;


	system("pause");
	return 0;
}