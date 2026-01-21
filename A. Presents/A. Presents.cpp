#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[100];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for ( int j = 1;  j <= n ; j++)
	for (int i = 1; i <= n; i++)
	{
		if (j == arr[i])
			cout << i << " ";
	}
}