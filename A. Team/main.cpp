#include <iostream>
int q = 0 ;
using namespace std;
void sum()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    int x = a + b + c ;
    if ( x >= 2 )
      q++;
}
int main()
{
    int n ;
  cin >>  n ;
  for ( int i = 1 ; i <= n ; i++ )
        sum();
        cout << q ;
}
