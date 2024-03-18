#include <bits/stdc++.h>

using namespace std;

#define int long long

int mod(int x, int y, int m)
{
    if ( y == 0)
        return 1;
    if ( y % 2 == 0)
        return mod( (x*x) % m, y/2, m) % m;
    return  (x * mod(x, y-1, m)) % m; 
}


signed main() 
{
    int x, n, m;
    cin >> x >> n >> m;

    int result = mod(x, n, m);

    cout << result;

    return 0;
}