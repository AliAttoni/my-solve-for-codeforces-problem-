#include <iostream>

using namespace std;

string gether( string& a )
{
   string b = a ;
   a = "" ;
    for( int i = b.size()-1 ; i >= 0 ; i-- )
    {
        a += b[i] ;
    }
    return a;
}
string compare( string &series1 , string& series2 )
{
return  (series1 == series2 )? "YES" : "NO" ;
}
int main()
{
    string a, b ;
    cin >> a >> b ;
    gether(a) ;
    cout << compare(a,b) ;
 }
