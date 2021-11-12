// lab6.2_rekur.cpp : This file contains the 'main' function. Program execution begins and ends there.
using namespace std;
#include <iostream>
#include <iomanip>
void CreateArray(int* a, const int size, const int Low, const int High, int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		CreateArray(a, size, Low, High, i + 1);
	}
}


void PrintArray(int* a, const int size, int i) {

	cout << setw(4) << a[i];
	if (i < size - 1) {
		PrintArray(a, size, i + 1);
	}
	else {
		cout << endl;
	}


}
int Count(int* a, const int size, int i, int coun) {
	if ( a[i] % 2 != 0) {
		coun++;
	}
	if (i < size - 1)
		return Count(a, size, i + 1, coun);
	else
		return coun;
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 7;
	int a[n];
	int Low, High;
	cout << "Enter low value "; cin >> Low;
	cout << endl;
	cout << "Enter high value "; cin >> High;
	cout << "Array: ";
	CreateArray(a, n, Low, High,0);
	PrintArray(a, n,0);

	cout << "number of neparnuh elements = " << Count(a, n,0,0) << endl;
	return 0;
}



