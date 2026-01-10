#include <iostream>

using namespace std;
string who_is_win( string series )
{
    int a = 0 , d = 0 ;
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] == 'A' )
            a++;
        else
            d++;
    }
    if ( a != b )
    return ( a > d )? "Anton" : "Danik" ;
    else
        return "Friendship" ;
}
void input_and_output()
{
    int n ;
    string series ;
    cin >> n >> series ;
    cout << who_is_win(series) ;
}
int main()
{
    input_and_output() ;
}
