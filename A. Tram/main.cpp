#include <iostream>

using namespace std;

int main()
{
    int max_pepole = 0 , car = 0 ;
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        int a , b ;
        cin >> a >> b ;
        max_pepole-=a;
        max_pepole+=b;
        if ( max_pepole > car )
            car = max_pepole ;
    }
    cout << car;
}
