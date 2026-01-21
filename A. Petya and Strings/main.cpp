#include<iostream>
using namespace std ;
string in_put( string &a , string &b )
{

    for ( int i = 0 ; i < a.size() ; i++ )
    {
        if ( int(a[i]) <= 90 )
        {
            a[i] = char(a[i]+32);
        }
        if ( int(b[i]) <= 90 )
        {
            b[i] = char(b[i]+32);
        }
    }
    return a , b ;
}
void compar( string a , string b )
{
    for ( int i = 0 ; i < a.size() ; i++ )
    {
        if ( a[i] > b[i] ){
            cout << 1 ;
        break;
        }
        else if ( a[i] < b[i] )
        {
            cout << -1 ;
            break ;
        }
        if ( i == a.size()-1)
            cout << 0 ;
    }
}
int main()
{
  string a ,b ;
    cin >> a >> b ;
in_put(a,b);
compar(a,b);
}
