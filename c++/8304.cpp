#include <bits/stdc++.h>

using namespace std;

int f[105][105];

int hesablama(int x, int y)
{
    if ( x <= 0 || y <= 0)
        return 0;
    if(f[x][y])
        return f[x][y];
    if ( x <= y)
        return f[x][y] = hesablama(x-1, y-2) + hesablama(x-2, y-1) + 2;
    return f[x][y] = hesablama(x-2, y-2) + 1;
    
}

int main() 
{
    int x, y;
    
    cin >> x >> y;
    
    cout << hesablama(x, y) << endl;
}