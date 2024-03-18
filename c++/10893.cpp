#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    if( n == 1) 
    {
        cout << 1;
        return 0;
    }

    while ( n != 1)
    {
        if ( n % 3 == 0 )
            n /= 3;
        
        else
            n--;
        
        count++;
    }

    cout << count;


    return 0;
}