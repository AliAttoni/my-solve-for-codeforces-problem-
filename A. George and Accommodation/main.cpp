#include <iostream>

using namespace std;
int different( int a , int b )
{
    int x = 0 ;
    if ( b - a >= 2 )
        x++;
    return x ;
}
void input()
{
    int n , counter = 0 ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        int p , q ;
        cin >> p >> q ;
     counter +=   different(p,q) ;
    }
    cout << counter ;
}
int main()
{
    input() ;
}
