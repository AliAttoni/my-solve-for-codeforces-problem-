#include <iostream>

using namespace std;

int main()
{
     int number , minu ;
     cin >> number >> minu ;
     for ( int i = 1 ; i <= minu ; i++ )
     {
         if ( number % 10 == 0 )
            number/=10 ;
         else
            number--;
     }
     cout << number ;
}
