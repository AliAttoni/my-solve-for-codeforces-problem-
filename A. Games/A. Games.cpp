#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

void FillTwoArray(int arr1[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) {
		arr1[i] = ReadNumber();
		arr2[i] = ReadNumber();
	}
}

int DifferenetBetweenTwiceArray(int arr[100], int arrLength, int ELement)
{
	int counter = 0; 
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == ELement)
			counter++;
	}
	return counter;
}

void FinalSolve()
{
	int arr1[100], arr2[100] , arrLength = 0 , counter = 0 ;

	arrLength = ReadNumber();
	FillTwoArray(arr1, arr2, arrLength);

	for (int i = 0; i < arrLength; i++)
	{
		counter += DifferenetBetweenTwiceArray(arr2, arrLength, arr1[i]);
	}
	cout << counter;
}

int main()
{
	FinalSolve();
}