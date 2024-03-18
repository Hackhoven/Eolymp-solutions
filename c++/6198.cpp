#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   int n;
   cin >> n;
   
   int array1[n], array2[n];
   
   for(int i = 0; i < n; i++)
       cin >> array1[i];
       
    for(int i = 0; i < n; i++)
       cin >> array2[i];
       
    sort(array1, array1 + n);
    
    sort(array2, array2 + n);
    reverse(array2, array2 + n);
    
    int cem = 0;
    for(int i = 0; i < n; i++)
       cem += array1[i] * array2[i];
       
    cout << cem;

    return 0;
}