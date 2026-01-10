#include <iostream>
char swaping( char &x , char& y )
{
    char a = x ;
         x = y ;
         y = a ;
         return x , y ;
}
using namespace std;
string sorting( string &a )
{
    for( int i = 0 ; i < a.size()-1 ; i++ )
    {
        for ( int j = 0 ; j < a.size()-1-i ; j++ )
        {
            if ( a[j] > a[j+1] )
                swaping(a[j] , a[j+1] ) ;
        }
    }
     return a ;
}
string compar( string& series )
{
    int x = 0 ;
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] == series[i+1] )
        {
            series[i] = '0' ;
        }
    }
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] != '0' )
            x++;
    }
    return (x%2==0)? "CHAT WITH HER!":"IGNORE HIM!" ;
}
int main()
{
    string a ;
    cin >> a ;
    sorting(a) ;
   cout << compar(a);
}
