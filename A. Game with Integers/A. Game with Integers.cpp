#include<iostream>

int ReadNumber()
{
	int Number = 0; 
	std::cin >> Number;
	return Number;
}

bool CheckIfNumberDivideBy_3(int Number)
{
	return Number % 3==0;
}

void The_Game()
{
	int Test_Case = ReadNumber();

	for (int i = 1; i <= Test_Case; i++)
	{
		int n = ReadNumber();
		std::cout << ((CheckIfNumberDivideBy_3(n - 1) || CheckIfNumberDivideBy_3(n + 1)) ? "First" : "Second") << std::endl ;
		
	}
}

int main()
{
	The_Game();
}