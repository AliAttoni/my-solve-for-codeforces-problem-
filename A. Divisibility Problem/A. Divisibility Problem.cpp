#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a % b == 0)
			cout << 0;
		else 
		if (a > b)
		{
			int Temp = a % b;
			cout << b - Temp << endl;
		}
		else
		{
			int n = b / a;
			if (b % (a * n) == 0)
				cout << a * n << endl;
			else
			{
				int m = b % (a * n);
				int s = n* a - m;
				cout << s << endl;
			}
		}
	}
}