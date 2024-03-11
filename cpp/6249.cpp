#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int trees[100000];
    for (int i = 0; i < n; i++) 
        cin >> trees[i];

    sort(trees, trees + n);

    int maxDays = 0;
    for (int i = 0; i < n; i++) 
    {
        int days = trees[i] + n - i;
        maxDays = max(maxDays, days);
    }

    cout << maxDays + 1;

    return 0;
}