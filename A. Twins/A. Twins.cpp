#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0; 
	cin >> Number;
	return Number;
}

void swapArrayElement(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void FillArrayElement(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = ReadNumber();
}

int CalculateTheSumOfArrayElement(int arr[100], int arrLength)
{
	int Sum_ArrayElement = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum_ArrayElement += arr[i];
	}
	return Sum_ArrayElement;
}

void sort(int arr[100], int arrLength )
{
	for (int i = 0; i < arrLength - 1 ; i++)
	{
		int min = i;
		for (int j = i + 1; j < arrLength ; j++)
		{
			if (arr[j] > arr[min])
				min = j;
		}
		swap(arr[i], arr[min]);
	}
}

void The_Program()
{
	int arr[100], Number_Coins = 0;

	Number_Coins = ReadNumber();

	FillArrayElement(arr, Number_Coins);

	sort(arr, Number_Coins);

	int CoinBrothre_1 = arr[0];
	int Total_Mony = CalculateTheSumOfArrayElement(arr, Number_Coins);

	for (int i = 0; i < Number_Coins; i++)
	{
		if (CoinBrothre_1 > Total_Mony / 2)
		{
			cout << i + 1;
			break;
		}
		CoinBrothre_1 += arr[i + 1];
	}

}

int main()
{
	The_Program();
}