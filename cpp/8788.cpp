#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, s;
    cin >> n >> s;

    int count = 0;
    for (int i = n; i >= 1 && s > 0; i--) 
    {
        if (s >= i) 
        {
            int numCoins = s / i;
            count += numCoins;
            s -= numCoins * i;
        }
    }

    cout << count;

    return 0;
}