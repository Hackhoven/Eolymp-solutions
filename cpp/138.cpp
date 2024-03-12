#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int denominators[6] = {10, 20, 50, 100, 200, 500};
    int count = 0;

    if ( n % 10 != 0 )
    {
        cout << -1;
        return 0;
    }

    while ( n >= denominators[5])
    {
        count += n / denominators[5];
        n %= denominators[5];
    }

    while ( n >= denominators[4])
    {
        count += n / denominators[4];
        n %= denominators[4];
    }

    while ( n >= denominators[3])
    {
        count += n / denominators[3];
        n %= denominators[3];
    }

    while ( n >= denominators[2])
    {
        count += n / denominators[2];
        n %= denominators[2];
    }

    while ( n >= denominators[1])
    {
        count += n / denominators[1];
        n %= denominators[1];
    }

    while ( n >= denominators[0])
    {
        count += n / denominators[0];
        n %= denominators[0];
    }

    if ( n == 0)  cout << count;
    else  cout << -1;
    
    return 0;
}