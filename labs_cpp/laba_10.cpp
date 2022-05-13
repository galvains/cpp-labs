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
    if (i < size) {
        cout << arr[i] << " ";
        return output(arr, i + 1, size);
    }
}
 int f2 (int n) {
    return n ? n % 10 + f2(n / 10) : 0;
}


 int Combin(int n, int k, int &count) {
     count += 2;
     if (n == k || k == 0) {
         return 1;
     }
     else if (0 < k < n) {
         return Combin(n - 1, k, count) + Combin(n - 1, k - 1, count);
     }
     else {
         return 0;
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
    cout <<"Sums = " << f2(a) << " | " << f2(b) << " | " << f2(c) << endl;

    if (f2(a) > f2(b) && f2(a) > f2(c)) {
        cout << "сумма числа А болльше" << endl;
    }
    else if (f2(b) > f2(c) && f2(b) > f2(a)) {
        cout << "сумма числа B больше" << endl;
    }
    else  {
        cout << "сумма числа C больше" << endl;
    }

    int n, k;
    int Fcount = 0;
    cout << "\nинд) Введите k и n (0 <= k <= n): "; cin >> k >> n;
    cout << Combin(n, k,Fcount) << " | " << Fcount << endl;

	system("pause");
	return 0;
}