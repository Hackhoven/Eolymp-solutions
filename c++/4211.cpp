#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int l, n;
    cin >> l >> n;

    int arr[1000000];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    sort(arr, arr + n);

    double maxDistance = max(arr[0], l - arr[n-1]); 

    for (int i = 1; i < n; i++) 
    {
        double distance = arr[i] - arr[i-1];
        if(distance > maxDistance) {
            maxDistance = distance;
        }
    }

    maxDistance /= 2.0;

    printf("%.1lf", maxDistance);

    return 0;
}