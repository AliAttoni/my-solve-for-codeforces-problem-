#include <iostream>

using namespace std;

int main()
{
    int x = 0 ;
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
         bool a ;
         cin >> a ;
         if (a)
         {
             x++;
         }
    }
    if ( x > 0 )
    {
        cout << "HARD";
    }else
    {
        cout << "EASY" ;
    }
}
