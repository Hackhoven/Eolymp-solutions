#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long border = -10000000001;
    long long cavab = -1000000001;

    int rows, columns; 
    cin >> rows >> columns;

    //MATRIX
    long long a[210][210]; 
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
            cin >> a[i][j];
    }

    //DYNAMIC MATRIX
    long long dp[210][210]; 
    for (int i = 1; i <= rows; i++)
    {
        dp[i][0] = border;
        dp[i][columns + 1] = border;
    }

    for(int j = 1; j <= columns; j++)
    {
        dp[1][j] = a[1][j];
    }

    for(int i = 2; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            dp[i][j] = a[i][j] + max(max(dp[i-1][j-1], dp[i-1][j]), dp[i-1][j+1]);
        }
    }


    for(int j = 1; j <= columns; j++)
    {
        if(dp[rows][j] > cavab)
            cavab = dp[rows][j];
    }

    cout << cavab;
}