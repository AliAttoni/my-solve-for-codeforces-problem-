#include<iostream>
using namespace std ;
char swaping( char& x , char& y )
{
        char m = x ;
             x = y ;
             y = m ;
                return x , y ;
}
string process( int& n , int & t , string  & a )
{
    for ( int i = 1 ; i <= t ; i++ )
    {
        for (int j = 0 ; j < a.size() ; j++ )
        if ( a[j] == 'B' && a[j+1] == 'G' )
        {
            swaping(a[j] , a[j+1]) ;
            j++;
        }
    }
    return a ;
}
void input()
{
    int n , t ;
    cin >> n >> t ;
    string a ;
    cin >> a ;
    cout << process( n , t , a ) ;
}
int main()
{
    input() ;
}
