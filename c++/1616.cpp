#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int x)
{   
    if ( x <= 1) return 0;
    for(int i = 2; pow(i, 2) <= x; i++)
        if ( x % i == 0)  return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n) == 1)  cout << "Yes";
    else if( isPrime(n) == 0)  cout << "No";

    return 0;
}