#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    return pow(n, 2);
}

int main()
{
    long int n;
    cin >> n;

    long int heights[n];
    for (int i = 1; i <= n; i++)
        cin >> heights[i];

    long long dp[100001];
    dp[1] = 0;
    
    if (n == 2)
        dp[2] = power(abs(heights[2] - heights[1]));
    else
        dp[2] = min(power(abs(heights[2] - heights[1])), 3 * power(abs(heights[3] - heights[1])) + power(abs(heights[3] - heights[2])));

    for (int i = 3; i <= n; i++)
    {
        dp[i] = min(dp[i-1] + power(abs(heights[i] - heights[i-1])), dp[i-2] + 3 * power(abs(heights[i] - heights[i-2])));
        if (i < n)
            dp[i] = min(dp[i], dp[i-1] + 3 * power(abs(heights[i+1] - heights[i-1])) + power(abs(heights[i+1] - heights[i])));
    }

    cout << dp[n];
}