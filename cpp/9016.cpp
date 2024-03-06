#include <iostream>
using namespace std;

int binarySearch(int a[], int left, int right, int value)
{
    while ( left <= right)
    {
        int middle = left + (right-left)/2;
        if( value < a[middle])
            right = middle - 1;
        else if( value > a[middle])
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}

int main()
{
    int n, q;
    cin >> n >> q;

    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < q; i++)
    {
        int eded;
        cin >> eded;
        if ( binarySearch(array, 0, n-1, eded) == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}