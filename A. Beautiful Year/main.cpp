#include<iostream>
using namespace std ;
char swaping( char& a , char& b )
{
    char x = a ;
         a = b ;
         b = x ;
         return a , b ;
}
string sorting( string& n )
{
    for ( int i = 0 ; i < n.size()-1 ; i++ )
    {
        for ( int j = 0 ; j < n.size()-1-i ; j++ )
        {
            if ( n[j] < n[j+1])
                swaping(n[j] ,n[j+1]);
        }
    }
    return n ;
}
bool input( string n )
{
    if ( n[0] != n[1] )
    {
        if ( n[1] != n[2] )
        {
            if ( n[2] != n[3])
            {
                return 1 ;
            }else
            {
                return 0 ;
            }
        }else
        {
            return 0 ;
        }
    }else
    {
        return 0 ;
    }
}
int main()
{
    int n  ;
    cin >> n ;
    for ( int i = n+1 ; i <= 9999 ; i++ )
    {
        string a = to_string(i) ;
        string b = a ;
     sorting(a);
        if ( input(a))
        {
            cout << b ;
            break;
        }
    }
}
