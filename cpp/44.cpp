#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[5001];
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = i;

        for (int j = 1; j < i / 2; j++)
        {
            if (dp[j] + dp[i-j] < dp[i])
            {
                dp[i] = dp[j] + dp[i-j];
            }
        }

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0 && dp[j] + dp[i/j] < dp[i])
            {
                dp[i] = dp[j] + dp[i/j];
            }
        }
    }

    cout << dp[n];
}