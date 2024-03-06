#include <bits/stdc++.h>
using namespace std;

const long long MAXSIZE = 1e6 + 2;
long long arr[MAXSIZE];
long long dp[MAXSIZE];

int main()
{
    long long n;
    cin >> n;
    
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    
    
    dp[0] = arr[0];
    long long maximum = 0;
    
    for(int i = 1; i < n; i++) 
    {
        maximum = max(maximum , dp[i - 2]);
        dp[i] = maximum + arr[i];
    }
    
    long long cavab = 0;
    for(int i = 0; i < n; i++) 
        cavab = max(cavab , dp[i]);
        
    cout << cavab;
    
    return 0;
}