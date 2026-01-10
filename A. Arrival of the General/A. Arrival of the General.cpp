#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

void InputArrayElement(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = ReadNumber();
	}
}

int FindeTheMaxElement(int arr[100], int arrLength)
{
	int Max_Element = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > Max_Element)
			Max_Element = arr[i];
	}
	return Max_Element;
}

int FindeTheMinElement(int arr[100], int arrLength)
{
	int Min_Element = 100;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < Min_Element)
			Min_Element = arr[i];
	}
	return Min_Element;
}

int FindIndexMinElement(int arr[100], int arrLength , int Min_Element )
{
	int index = 0;
	for (int i = arrLength - 1; i >= 0 ; i--)
	{
		if (arr[i] == Min_Element) {
			index = i;
			break;
		}
	}
	return index;
}

int FindIndexMaxElement(int arr[100], int arrLength , int Max_Element )
{
	int index = 0;
	for (int i = 0 ; i < arrLength; i++ )
	{
		if (arr[i] == Max_Element){
			index = i;
		break;
	}
	}
	return index;
}

void TheFinshSolve()
{
	int arr[100];
	int arrLength = ReadNumber();
	int NumberOfSteps = 0;

	InputArrayElement(arr, arrLength);

	int Min_Element = FindeTheMinElement(arr, arrLength);
	int Max_Element = FindeTheMaxElement(arr, arrLength);

	int Index_Min_Element = FindIndexMinElement(arr, arrLength, Min_Element);
	int Index_Max_Element = FindIndexMaxElement(arr, arrLength, Max_Element);
	if (Index_Min_Element < Index_Max_Element) {

		NumberOfSteps += Index_Max_Element + (arrLength - Index_Min_Element - 1) - 1;
	}
	else
	{
		NumberOfSteps += (arrLength - Index_Min_Element - 1);
		NumberOfSteps += (Index_Max_Element );
	}
	cout << NumberOfSteps;
}

int main()
{
	TheFinshSolve();
}
