#include <iostream>

using namespace std;
char swaping( char& x , char& y )
{
      char b = x ;
      x = y ;
      y = b ;
        return x , y ;
}

string sorting( string & a )
{
    for ( int i = 0 ; i < a.size()-1 ; i++ )
    {
        for (int j = 0 ; j <a.size()-i-1 ; j++ )
        {
            if ( a[j] > a[j+1])
            swaping(a[j],a[j+1]);
        }

    }
 return a ;
}
void out_put( string a )
{
    for ( int i = 0 ; i < a.size() ; i++ )
    {
        if ( a[i] > '+' )
        {
            cout << a[i] ;
            if ( i != a.size()-1 )
                cout << '+' ;
        }
    }
}
int main()
{
     string series ;
     cin >> series ;
     sorting(series) ;
     out_put(series) ;
}
