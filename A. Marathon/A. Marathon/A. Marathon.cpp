#include<iostream>
#define sh short 

using namespace std;

sh ReadTestCases()
{
	sh test_Case;
	cin >> test_Case;
	return test_Case;
}

sh ReadNumber()
{
	sh Number;
	cin >> Number;
	return Number;
}

void Who_Front_a(sh a, sh &Count)
{
	for (int i = 1; i <= 3 ; i++)
	{
		sh n = ReadNumber();
		if (n > a)
			Count++;
	}
}

void Program()
{
	sh Test_cases = ReadTestCases();
	for (int i = 1; i <= Test_cases; i++)
	{
		sh a = ReadNumber(), Counte = 0;
		Who_Front_a(a, Counte);
		cout << Counte << endl;
	}
	
}
int main()
{
	Program();
}