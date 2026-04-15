#include<iostream>
#define sh short
using namespace std;

enum Division_X{ Division_1= 1 , Division_2 = 2 , Division_3 = 3 , Division_4 = 4 };

sh ReadNumber()
{
	sh Number;
	cin >> Number;
	return Number;
}

sh Read_TestCases()
{
	int Test;
	cin >> Test;
	return Test;
}

Division_X  Check_The_Rating(sh Rating)
{
	if (Rating <= 1399)
		return Division_4;
	else if (Rating >= 1400 && Rating <= 1599)
		return Division_3;
	else if (Rating >= 1600 && Rating <= 1899)
		return Division_2;
	else return Division_1;
}

void PrintTheDivsion(Division_X divs)
{
	if (divs == Division_X::Division_1)
		cout << "Division 1" << endl ;
	else if (divs == Division_X::Division_2)
		cout << "Division 2" << endl;
	else if (divs == Division_3)
		cout << "Division 3" << endl;
	else
		cout << "Division 4" << endl;
}

void Program()
{
	sh TestCases = Read_TestCases();
	for (sh i = 1; i <= TestCases; i++)
	{
		sh Rating = ReadNumber();
		PrintTheDivsion(Check_The_Rating(Rating));
	}
}
int main()
{
	Program();
}