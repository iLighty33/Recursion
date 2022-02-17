// Персональный шаблон проекта C++
#include <iostream>

using namespace std;

int fact(int num) {
	if (num <= 1)
		return 1;
	return num * fact(num - 1);
}
int fibonacci(int num);
template <typename T> void bubbleSort(T array[], int lenght, bool type = true);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "! = " << fact(n) << endl; */

	// Задача 1
	/*cout << "Задача 1.\nПервые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fibonacci(i) << endl;
	cout << endl; */

	// Задача 2

	cout << "Задача 2.\nИзначальный массив:\n[";
	float z2[5] = { 5.2, 1.4, 0.7, 9.11, 5.2 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";
	bubbleSort(z2, 5, false);
	cout << "Отсортированный массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";

	return 0;
}

// Задача 2
template <typename T> void bubbleSort(T array[], int lenght, bool type) {
	if (type) {
		for (int i = lenght - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
	}

	else
		for (int i = lenght - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);

}

// Задача 1
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}