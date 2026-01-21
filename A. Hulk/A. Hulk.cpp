#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number; 
	cin >> Number;
	return Number;
}

bool CheckEvenNumber(int Number)
{
	return Number % 2 == 0;
}

void PrintFeel(int Number)
{
	if (CheckEvenNumber(Number))
		cout << " love ";
	else
		cout << " hate ";
}

void PrintDoctorFeel(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		cout << "I";
		PrintFeel(i);
		if (i == Number)
			cout << "it ";
		else
			cout << "that ";
	}
}

int main()
{
	PrintDoctorFeel(ReadNumber());
}

