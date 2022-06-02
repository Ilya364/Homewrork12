#include "Complex.h"
#include <iostream>

using namespace std;


template <typename T>
void SelectionSort (T* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}



int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int SIZE;
	cin >> SIZE;
	cout << "int array:"<<endl;

	int* arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	cout << endl;
	SelectionSort(arr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	delete[]arr;
	cout << endl<<endl;

////////////////////////////////////////////////////
	
	cout << "double array:" << endl;
	double* arrDouble = new double [SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arrDouble[i] = (rand() % (SIZE * 10)) / 10.0;
		cout << arrDouble[i] << " ";
	}
	cout << endl;
	SelectionSort(arrDouble, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrDouble[i] << " ";
	}
	delete[]arrDouble;
	cout << endl<<endl;

///////////////////////////////////////////////////////
	
	cout << "Complex array:" << endl;
	Complex* comArr = new Complex[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		double real = rand() % 5;
		double imag = rand() % 5;
		comArr[i].SetComplex(real, imag);
		complexPrint(comArr[i]);
	}
	cout << endl;
	SelectionSort(comArr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		complexPrint(comArr[i]);
	}
	delete[]comArr;

}
