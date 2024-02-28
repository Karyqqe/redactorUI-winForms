
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(0));

	//cout << "Введите размер массива по вертикали: ";
	//int y;
	//cin >> y;

	//cout << "Введите размер массива по горизонтали: ";
 //   int x;
	//cin >> x;
	//обьявляем
	int arr[4][3];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}

	//выводим массив
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Выберите вариант сортировки массива: ";
	cout << "[1] По возрастанию" << endl;
	cout << "[2] По убыванию" << endl;

	int choise;
	cin >> choise;
	Sleep(1000);
	system("cls");

	if (choise == 1) {

		//сортируем
		for (int i = 0; i < 4 * 3; i++) {
			for (int j = 0; j < 4; j++) {
				for (int k = 0; k < 3 - 1; k++) {
					for (int l = 0; l < 3 - k - 1; l++) {
						if (arr[j][l] > arr[j][l + 1]) {
							// Обменять значения ячеек в строке
							int temp = arr[j][l];
							arr[j][l] = arr[j][l + 1];
							arr[j][l + 1] = temp;
						}
					}
				}
			}

			// Вывести отсортированный массив на экран
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
		}
	}
	else {

		//сортируем
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3 - 1; j++) {
				for (int k = 0; k < 3 - j - 1; k++) {
					if (arr[i][k] < arr[i][k + 1]) {
						// Обменять значения ячеек массива
						int temp = arr[i][k];
						arr[i][k] = arr[i][k + 1];
						arr[i][k + 1] = temp;
					}
				}
			}
		}

		// Вывести отсортированный массив на экран
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	




}

