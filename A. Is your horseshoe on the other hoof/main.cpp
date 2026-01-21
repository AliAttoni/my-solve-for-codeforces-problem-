#include <iostream>

using namespace std;
void selection_sort(int arr[], int size)
{
    for( int i = 0 ; i < size-1 ; i++ )
    {
        int min = i ;
        for ( int j = i+1 ; j < size ; j++ )
        {
            if ( arr[j] < arr[min] )
                min = j;
        }
      swap(arr[i],arr[min]);
    }
}
int main()
{
      int n=4 , x = 0;
       int arr[n] ;
      for(int i = 0 ; i < n ; i++ )
        cin >>arr[i] ;
        selection_sort(arr,n);
        for(int i = 0 ; i < n ; i++ )
        {
            if (arr[i] == arr[i+1])x++;
        }
        cout << x   ;
 }
