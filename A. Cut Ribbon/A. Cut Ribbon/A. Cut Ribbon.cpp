#include<iostream>
#include<vector>
#include<algorithm>
#define sh short 

using namespace std;

sh ReadNumber()
{
	sh Number;
	cin >> Number;
	return Number;
}




int main()
{
	sh n = ReadNumber();

	sh a, b, c;
	a = ReadNumber();
	b = ReadNumber();
	c = ReadNumber();


	sh arr[3] = { a,b,c };
	sort(arr, arr + 3);

	sh sum_F_S = arr[0] + arr[1];
	sh sum_T = arr[0] + arr[2] + arr[3] ;

	if (sum_T == n)
		cout << 3;
	else if (n - sum_F_S == 0)
		cout << 2;
	else
		cout << 1;
}