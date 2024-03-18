#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getDivisors(int n)
{
    vector<int> divisors;

    for(int i = 1; i*i <= n; ++i)
    {
        if( n % i == 0)
        {
            divisors.push_back(i);
            if( i != n/i)
                divisors.push_back(n/i);
        }
    }

    sort(divisors.begin(), divisors.end());

    return divisors;
}


int main()
{
    int n;
    cin >> n;

    vector<int> divisors = getDivisors(n);

    for(int divisor : divisors)
        cout << divisor << " ";

    return 0;
}