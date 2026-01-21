#include<iostream>
using namespace std;
bool many( string series )
{
    int x = 0 , y = 0 ;
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] <= 90 )
            x++;
        else
            y++;
    }
    return (x>y)? 1:0 ;
}
string lower( string &series )
{
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] <= 90 )
        series[i] = series[i] + 32 ;
    }
    return series ;
}
string upper( string &series )
{
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] > 90 )
        series[i] = series[i] - 32 ;
    }
    return series ;
}
void input()
{
    string series ;
    cin >> series ;
    if ( many(series) )
    {
        cout << upper(series) ;
    }
    else
        cout << lower(series) ;
}
int main ()
{
    input() ;
}
