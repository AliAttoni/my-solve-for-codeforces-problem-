#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

void FillArrayElement(int arr[1000], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = ReadNumber();
	}
}

void FinalSolve(int arr[1000], int arrLength)
{

	int Max_Result = arr[0], counter = 0, Min_Result = arr[0];
	for (int i = 1; i < arrLength; i++)
	{
		if (arr[i] == arr[0])
			continue;
		if (arr[i] > Max_Result ) {
			Max_Result = arr[i];
			counter++;
		}
		else if ( arr[i] < Max_Result && arr[i] < Min_Result )
		{
			Min_Result = arr[i];
			counter++;
		}
	}
	cout << counter;
}

int main()
{
	int arr[1000], arrLength = 0; 
	arrLength = ReadNumber();
	FillArrayElement(arr, arrLength);
	FinalSolve(arr, arrLength);
}