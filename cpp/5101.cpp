#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mod = 9929;
    cin >> n;

    long long a[50][50] = {0};
    long long hodja[54][54]; 
    long long donkey[54][54]; 

    memset(hodja, 0, sizeof(long long));
    memset(donkey, 0, sizeof(long long));

    hodja[1][1] = 1;
    donkey[n][n] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            hodja[i][j] = (hodja[i][j] + hodja[i-1][j] + hodja[i][j-1]) % mod;
    }

    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j >= 1; j--)
            donkey[i][j] = (donkey[i][j] + donkey[i + 1][j] + donkey[i][j+1]) % mod;
    }

    long long possibleWays = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            possibleWays = (possibleWays + hodja[i][j] * donkey[i][j]) % mod;
    }

    cout << possibleWays;
}