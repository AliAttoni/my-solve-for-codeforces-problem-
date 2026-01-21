#include <iostream>

using namespace std;
/*char swaping( char &a , char& b )
{
    char x = a ;
         a = b ;
         b = x ;
         return a ,b ;
}
string sorting ( string &series )
{
    for ( int i = 0 ; i < series.size()-1 ; i++ )
    {
        for (int j = 0 ; j < series.size()-1-i ; j++ )
        {
            if ( series[j] > series[j+1])
                swaping(series[j] , series[j+1]);
        }
    }
    return series ;
}*/
int tons ( string series )
{
    int x = 0 ;
    for ( int i = 0 ; i < series.size() ; i++ )
    {
        if ( series[i] == series[i+1])
            x++;
    }
    return x ;
}
void input_and_output()
{
    int n ;
    cin >> n ;
    string series ;
    cin >> series ;
    cout << tons(series);
}
int main()
{
    input_and_output();
}
