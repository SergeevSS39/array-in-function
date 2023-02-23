#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <math.h>
using namespace std;
enum Color {
	Black, Blue, Green, Cyan, Red,
	Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan,
	LightRed, LightMagenta, Yellow, White
};
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
void SetColor(Color text, Color background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
//функция массива для домашки
void basicArr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = -20 + rand() % 40;
	}
}
//и его вывод на экран
void printBasicArr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//ДЗ - для проверки нужную задачу раскоментировать :)
//1. Написать функцию, возвращающую среднее арифметическое всех значений массива, которые заканчиваются на 7.
//int quest1(int arr[], int length)
//{
//	int meanNum = 0, count = 0, sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (arr[i] % 10 == 7 && arr[i] !=0)
//		{
//			sum += arr[i];
//			count++;
//		}	
//	}
//	meanNum = sum / count;
//	return meanNum;
//}
//2. Написать функцию, возвращающую отношение среднего арифметического всех четных значений массива 
//к среднему арифметическому всех нечетных значений массива.
//double quest2(int arr[], int length)
//{
//	int sumEven=0, sumNotEv=0, countEv=0, countNotEv=0;
//	for (int i = 0; i < length; i++)
//	{
//		if (arr[i] % 2 == 0) 
//		{
//			sumEven += arr[i];
//			countEv++;
//		}
//		else if (arr[i] % 2 != 0)
//		{
//			sumNotEv += arr[i];
//			countNotEv++;
//		}
//	}
//	return double(sumEven/countEv)/(sumNotEv/countNotEv);
//}
//3. Написать функцию, возвращающую кол - во сравнений, необходимых для получения 
//отсортированного массива по возрастанию значений.
//int quest3(int arr[], int length)
//{
//	int min, position, count = 0;
//	for (int i = 0; i < length; i++)
//	{
//		min = arr[i];
//		position = i;
//		for (int j = i+1; j < length; j++)
//		{
//			if (min < arr[j]) 
//			{
//				min = arr[j];
//				position = j;
//			}
//			count++;
//		}
//		if (arr[i] != min)
//			swap(arr[i], arr[position]);
//	}
//	return count;
//}
//4. Написать функцию, меняющую местами максимальный и минимальный элементы массива.
//void quest4(int arr[], int length)
//{
//	int min = arr[0], max = arr[0], maxPoint=0, minPoint=0;
//		for (int i = 0; i < length; i++)
//		{
//			if (min > arr[i])
//			{
//				min = arr[i];
//				minPoint = i;
//			}
//			else if (max < arr[i])
//			{
//				max = arr[i];
//				maxPoint = i;
//			}
//		}
//		cout << "min " << min << " and max " << max << endl;
//		cout << endl;
//		swap(arr[minPoint], arr[maxPoint]);
//		for (int i = 0; i < length; i++)
//		{
//			cout << arr[i] << "\t";
//		}
//}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	const int length = 15;
	int arr[length];
	basicArr(arr, length);
	printBasicArr(arr, length);
	cout << endl;

	//1.
	//cout << quest1(arr, length);
	//2.
	//cout << quest2(arr, length);
	//3.
	//cout << "Количество сравнений: " << quest3(arr, length) << endl;
	//4.
	//quest4(arr, length);

	return 0;
}