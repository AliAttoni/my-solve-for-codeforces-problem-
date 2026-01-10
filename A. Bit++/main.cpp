#include <iostream>

using namespace std;
void sum( string a , int & x )
{
    if (a[1] == '+' )
    x++;
    if ( a[1] == '-')
    x--;
}
int main()
{
    int n , x = 0 ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
     string a ;
     cin >> a ;
     sum(a,x) ;
    }
    cout << x ;
}
