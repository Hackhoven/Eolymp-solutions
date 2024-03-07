#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int array[n], dp[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
        dp[i] = 1;
    }

    for (int i = 1; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (array[i] > array[j]) 
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    int cavab = *max_element(dp, dp+n);
    cout << cavab << endl;

    return 0;
}