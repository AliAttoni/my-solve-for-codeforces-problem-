#include<iostream>
using namespace std ;


int main()
{
    int n ;
    cin >> n ;
    int sum = 0 ;
    sum = n/5;
    n = n%5;
    sum = sum + n/4;
    n = n%4;
     sum = sum + n/3;
    n = n%3;
     sum = sum + n/2;
    n = n%2;
    sum = n + sum ;
    cout << sum  ;
 }
