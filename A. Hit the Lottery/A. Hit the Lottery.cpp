#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

int CalculateNumberOfPaperOf$(int Number)
{
	int Reminder = 0, NumberOfPaper = 0;

	if (Number >= 100) {
		NumberOfPaper += Number / 100;
		int NumberOf_100 = Number / 100;
		Number = Number - (NumberOf_100) * 100;
	}

	if (Number >= 20) {
		NumberOfPaper += Number / 20;
		int NumberOf_20 = Number / 20;
		Number = Number - (NumberOf_20) * 20;
	}

	if (Number >= 10) {
		NumberOfPaper += Number / 10;
		int NumberOf_10 = Number / 10;
		Number = Number - (NumberOf_10) * 10;
	}

	if (Number >= 5) {
		NumberOfPaper += Number / 5;
		int NumberOf_5 = Number / 5;
		Number = Number - (NumberOf_5) * 5;
	}


	return NumberOfPaper + Number;
}



int main()
{
	int Number = ReadNumber();
	int NumberOpPaper = 0;


	NumberOpPaper = CalculateNumberOfPaperOf$(Number);

	cout << NumberOpPaper;
}