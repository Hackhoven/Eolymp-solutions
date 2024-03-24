#include <bits/stdc++.h>

using namespace std;

#define int long long

const int mod = 1e9 + 7;

int modpow(int a , int n , int m){ // a^n mod m
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return modpow((a * a) % m  , n / 2 , m) % m; // (a * a) ^ (n / 2)
    return (a * modpow(a , n - 1 , m)) % m; // a * (a ^ (n - 1))
    
}

signed main() 
{
    // n * (n - 1) ^ (n - 1)
    
    int n;
    cin >> n;
    int ans = (n * modpow(n - 1 , n - 1 , mod)) % mod;
    cout << ans << endl;
    return 0;
}