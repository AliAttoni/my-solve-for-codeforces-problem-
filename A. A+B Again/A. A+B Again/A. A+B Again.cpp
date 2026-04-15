#include<iostream>
#define sh short 

using namespace std;

sh ReadNumber()
{
	int Number; 
	cin >> Number;
	return Number; 
}

sh Calculate_Sum_To_Digits_Number(sh n)
{
	sh Sum = 0;
	while (n > 0)
	{
		Sum += n % 10;
		n /= 10;
	}
	return Sum;
}

void Program()
{
	sh Test_Case = ReadNumber();

	for (int i = 1; i <= Test_Case; i++)
	{
		sh n = ReadNumber();

		cout << Calculate_Sum_To_Digits_Number(n) << endl;
	}
}

int main()
{
	Program();
}