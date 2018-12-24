#include <iostream>
#define n 5

using namespace std;


// прототип функциї
void bubbleSort(int arrForSort[]);
void SumElement();

void main()
{	
	int arr[n];
	int SumElement = 0;

	cout << "Початковий масив:\n";
	for (int i = 0; i < n; i++)
	{
		arr[i] =  n - i; // заповнюємо значення по спаданню
		cout << arr[i] << "\n__\n";
	}
	cout << "\n\n";


	SumElement();
	cout << "Сумма елементів масиву:\n";
	cout << SumElement << endl; // вивід сумми елементів

	bubbleSort(arr);  // передаємо в функцію для сортування

	cout << "Масив після сортування:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\n__\n";
	}
	cout << "\n\n";
}

void SumElement() { // функція сумми елементів
	for (int i = 0; i < n; i++)
	{
		SumElement = SumElement + arr[i];
	}
}


void bubbleSort(int arrForSort[])
{
	int buff = 0; // для тимчасового збереження, при перезаписі

	for (int i = 0; i < n - 1; i++) // 
	{
		// вложенний цикл проходить від четвертого елемента
		// до першого, знаходимо за допомогою if найлегше значення,
		// порівнюються зєднані пари елементів,
		// і підносить його в нулову комірку.
		for (int j = n - 1; j > i; j--) 
		{
			if (arrForSort[j] < arrForSort[j - 1])
			{
				buff = arrForSort[j - 1];
				arrForSort[j - 1] = arrForSort[j];
				arrForSort[j] = buff;
			}
		}
	}
}
