#include <iostream>

using namespace std;
int years( int li , int bo )
{int i = 1 ;
    for ( int i = 1 ; i <= 100 ; i++ )
    {
        li*=3 ;
        bo*=2 ;
        if ( li > bo )
            return i ;
    }
}
void input()
{
    int li , bo ;
    cin >> li >> bo ;
 cout <<   years(li , bo);
}
int main()
{
  input();
}
