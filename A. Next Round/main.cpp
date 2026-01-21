#include <iostream>
int x = 0 ;
using namespace std;
void in_put( int arr[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
}
void out_put( int arr[] , int n , int k )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( arr[i] >= arr[k-1] && arr[i] > 0 )
            x++;
    }
    cout << x ;
}
int main()
{
    int n , k ;
    cin >> n >> k ;
    int array[n] ;
    in_put( array , n );
    out_put(  array , n , k );
}
