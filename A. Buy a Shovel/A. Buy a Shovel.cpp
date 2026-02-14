#include<iostream>

using namespace std;

int ReadNumber() {
	int Number = 0;
	cin >> Number;
	return Number;
}

int FindNumberOfShovle(int k, int r)
{
	for (int i = 1; i <= 1000; i++)
	{
		int total = k * i;
		if (total % 10 == 0)
			return i;
		else 
		if ((total - r) % 10 == 0)
			return i;
	}

}

void solve()
{
	int k = ReadNumber();
	int r = ReadNumber();
	int NumberofShovkle = FindNumberOfShovle(k,r);
	cout << NumberofShovkle;
}

int main()
{
	solve();
}