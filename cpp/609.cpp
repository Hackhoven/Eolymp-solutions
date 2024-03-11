#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int cans[100000];
    for (int i = 0; i < n; i++) 
        cin >> cans[i];

    sort(cans, cans + n, greater<int>());

    int i = 0, j = n-1;
    int trips = 0;
    while (i <= j) 
    {
        if (cans[i] + cans[j] <= k) 
        {
            i++;
            j--;
        } 

        else 
            i++;

        trips++;
    }

    cout << (cans[0] > k ? "Impossible" : to_string(trips));

    return 0;
}