#include <iostream>

using namespace std;
void long_word( string word )
{
    int x = word.size() ;
    cout << word[0] << x-2 << word[x-1] << endl  ;
}
int main()
{
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        string word ;
        cin >> word ;
        int m = word.size() ;
        if ( m <= 10 )
            cout << word << endl ;
        else
            long_word(word);

    }
}
