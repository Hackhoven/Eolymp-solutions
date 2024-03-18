#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   int n, m;
   cin >> n >> m;
   
   int array1[n], array2[m];
   
   for(int i = 0; i < n; i++)
       cin >> array1[i];
       
    for(int i = 0; i < m; i++)
       cin >> array2[i];
       
    sort(array1, array1 + n);
    sort(array2, array2 + m);
     
    int l = 0 , r = 0;
    int cnt = 0;
    while((l < n) && (r < m)){
        if(array1[l] <= array2[r]){
            l++;
            r++;
            cnt++;
            continue;
        }
        r++;
    }
    cout << cnt << endl;

    return 0;
}