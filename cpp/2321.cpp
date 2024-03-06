#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int length)
{
    int temp, min;
    for(int i = 0; i < length - 1; i++)
    {
        min = i;
        for(int j = i+1; j < length; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}


int main() 
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}