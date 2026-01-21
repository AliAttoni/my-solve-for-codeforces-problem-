#include <iostream>

using namespace std;
bool many_number( string series )
{
    int x = 0 ;
    for ( int i = 0 ; i< series.size() ; i++ )
    {
        if ( series[i] == '4' || series[i] == '7' )
            x++;
    }
    return ( (x  ==4 || x ==7) && x > 0 )? 1:0 ;
}
void input_and_output()
{
    string series;
    cin >> series ;
    if (many_number(series))
        cout << "YES";
    else
        cout << "NO" ;
}
int main()
{
     input_and_output() ;
}
