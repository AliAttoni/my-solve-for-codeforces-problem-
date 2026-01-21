#include <iostream>

using namespace std;
string big_latter( string &series )
{
    if ( series[0] > 90 )
          series[0]-=32 ;
    return series ;
}
void input()
{
    string series ;
    cin >> series ;
   cout<< big_latter(series);

}
int main()
{
   input();
}
