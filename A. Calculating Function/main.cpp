#include <iostream>

using namespace std;
/*void different( int & sum , long long i )
{
    if ( i % 2 == 0 )
    {
        sum+=i ;
    }else
    {
        sum+=-1*i;
    }
}
void loop( long long n )
{
    int sum = 0 ;
    for ( long long i = 1 ; i <= n ; i++ )
    {
        different(sum,i) ;
    }
    cout << sum ;
}
void input()
{
    long long n ;
    cin >> n ;
    loop(n) ;
}*/
#include <iostream>
using namespace std;
long long even_o_odd( long long n )
{
    if ( n % 2 == 0 )
        return n/2 ;
    else
        return -1*((n+1)/2);
}
void input()
{
    long long n ;
    cin >> n ;
    cout << even_o_odd(n) ;
}


int main()
{
input() ;
}
