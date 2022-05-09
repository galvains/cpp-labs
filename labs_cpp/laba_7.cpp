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
	cout << "count = " << count << endl;

	int arr4[6]{ 23,3,8,0,12,7 };
	int ind1 = 0, ind2 = 0;
	cout << "\n4) ";
	for (int i = 0; i < 6 - 1; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (abs(arr4[i] - arr4[j]) == 2) {
				ind1 = i;
				ind2 = j;
				
				if (j < 6) {
					break;
				}
			}
		}	
	}
	cout << "ind1 = " << ind1 << " | ind2 = " << ind2 << endl;


	system("pause");
	return 0;
}