//Arrays

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 1024 
	//Ввод элементов массива с клавиатуры:

	cout << "Введите элемент: ";

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		cout << endl;
	}


	// Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;

	//Вывод массива на экран в обратном порядке

	for (int i = n-1; i >=0; i--)
	{
		
		cout << arr[i] << "\t";

	}
	cout << endl;

	//Вычисление суммы элементов массива
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	
	}
	cout << "Сумма элементов массива: " << sum <<endl;



	//Среднее арифметическое элементов массива
	
	cout << "Средне арифметическое элементов массива: " << (double)sum/n << endl;

	//Минимальное и максимальное значение
	
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: "  << min << endl;





}
