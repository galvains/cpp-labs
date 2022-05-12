#include<iostream>
#include"cmath"

using namespace std;

int input(int *arr, int i, int size) {
    cin >> arr[i];   
    if (i != size - 1) {
        return input(arr, i + 1, size);
    }
}
int sum(int* arr, int i, int size){
    if (i == size - 1)
        return arr[i];
    else
        return arr[i] + sum(arr, i + 1, size);
}
int output(int *arr, int i, int size) {
    if (i <= size-1) {
        cout << arr[i] << " ";
        return output(arr, i + 1, size);
    }
}

//-------------------------------------------------------------------------------

int laba_10() {
	setlocale(0, "");

    int size, i = 0;
    cout << "1) Введите размер массива: "; cin >> size;
    int* arr = new int[size];
    input(arr, i, size);
    cout << "---------------------------\nsum = ";
    cout << sum(arr, i, size) << endl;
    cout << "---------------------------" << endl;
    output(arr, i,size);  
    delete[] arr;

    int a, b, c;
    cout << "\n2) Введите число 3 числа: "; cin >> a >> b >> c;


	system("pause");
	return 0;
}