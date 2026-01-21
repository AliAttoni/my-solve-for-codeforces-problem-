#include <iostream>

using namespace std;

void input(int  toll[] , int n )
{
    for ( int i = 0 ; i < n ; i++ ){
        cin >> toll[i] ;
    }
}
int out_put( int toll[] , int n , int h )
{
    int x = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( toll[i] > h )
            x+=2;
        else
            x+=1;
    }
    return x ;
}
int main()
{
    int n , h ;
    cin >> n >> h ;
    int toll[n] ;
    input(toll , n) ;
    cout << out_put( toll , n , h ) ;
}
