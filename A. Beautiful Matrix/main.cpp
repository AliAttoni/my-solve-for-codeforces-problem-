#include<iostream>
using namespace std ;
 int a , b ;
void in_put( int arr[][5] , int x )
{
    for ( int i = 0 ; i < x ; i++ )
    {
        for ( int j = 0 ; j < x ; j++ )
        {
            cin >> arr[i][j] ;
            if ( arr[i][j] == 1 )
            {
                a=i;b=j;
            }
        }
    }
}
int main()
{
    int arr[5][5] ;
    in_put( arr  , 5 );
    cout << abs(2-a) + abs(2-b) ;
}
