#include <bits/stdc++.h>
using namespace std;

int m[1000];

int FindMin(int left, int right)
{
    if (left == right) return m[left];
    int middle = (left + right) / 2;
    int u = FindMin(left, middle);
    int v = FindMin(middle + 1, right);
    return (u < v) ? u : v;
}

int main()
{
    int n;
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++)
        scanf("%d", &m[i]);

    printf("%d\n", FindMin(1, n));

    return 0;
}