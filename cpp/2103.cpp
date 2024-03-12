#include <bits/stdc++.h>
using namespace std;

const int MAXN = 25;
const int MAXW = 25;

int w, n;
int arr1[MAXN];
int arr2[MAXW];

int main() 
{
    cin >> w >> n;
    for (int i = 1; i <= n; i++) 
        cin >> arr1[i];
    
    for (int i = 1; i <= n; i++) 
    {
        for (int j = w; j >= 1; j--) 
        {
            if (j >= 1) 
                arr2[j] = max(arr2[j], arr2[j - 1] + arr1[i]);
        }
    }

    cout << arr2[w];

    return 0;
}