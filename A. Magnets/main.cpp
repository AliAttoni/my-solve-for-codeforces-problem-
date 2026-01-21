#include<iostream>
using namespace std ;
void input_array( int arr[] , int size_array)
{
    for ( int i = 0 ; i < size_array ; i++ )
    {
        cin >> arr[i] ;
    }
}
void different_n_out_put ( int arr[] , int size_array )
{
    int x = 0 ;
    for ( int i = 0 ; i < size_array ; i++ )
    {
        if ( arr[i] != arr[i+1])
            x++;
    }
    cout << x ;
}
void input()
{
    int n ;
    cin >> n ;
    int array[n] ;
    input_array( array ,n ) ;
    different_n_out_put( array , n ) ;
}
int main()
{
    input() ;
}
