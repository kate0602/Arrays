
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	//Вывод исходного кода
	int number;
	cout << "Количество сдвигов: "; cin >> number;
	for (int i = 0; i < number; i++)
	{

	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Сдвиг массива
	int buffer = arr[0];

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1]; //В текущий элемент массива ложим следующий элемент
	}
	arr[n - 1] = buffer;
	}

	//Вывод сдвинутого кода

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


}
