#include <iostream>

using namespace std;
string even_part( int x )
{
    if ( x == 2 )
        return "NO" ;
    else
        return "YES" ;
}
int main()
{
   int n ;
   cin >> n ;
   if ( n % 2 == 0)
    cout << even_part(n) ;
   else
    cout << "NO" ;
}
