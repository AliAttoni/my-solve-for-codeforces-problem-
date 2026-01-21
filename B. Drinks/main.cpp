#include <iostream>

using namespace std;
void input_arr(int arr[] , int size )
{
    for ( int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }
}
double out_put(int arr[] , int size)
{
    int sum = 0 ;
    for ( int i = 0 ; i < size ; i++ )
    {
        sum = sum + arr[i] ;
    }

 return (double)sum/size ;
}
int main()
{
   int n ;
   cin >> n;
   int arr[n] ;
    input_arr(arr,n);
    cout << out_put(arr,n) ;
}
