#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int h[100000];
    for (int i = 0; i < n; i++) 
        cin >> h[i];


    int arr[100000];
    arr[0] = 0;
    arr[1] = abs(h[1] - h[0]);
    
    for (int i = 2; i < n; i++) 
    {
        arr[i] = min(arr[i-1] + abs(h[i] - h[i-1]), arr[i-2] + abs(h[i] - h[i-2]));
    }

    cout << arr[n-1] << endl;

    return 0;
}