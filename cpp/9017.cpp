#include <iostream>
using namespace std;

int binarySearchFirst(int a[], int left, int right, int value)
{
    while (left < right)
    {
        int middle = left + (right - left) / 2;
        if (a[middle] < value)
            left = middle + 1;
        else
            right = middle;
    }
    if (a[left] == value)
        return left;
    else
        return -1;
}

int binarySearchLast(int a[], int left, int right, int value)
{
    while (left < right)
    {
        int middle = left + (right - left + 1) / 2;
        if (a[middle] > value)
            right = middle - 1;
        else
            left = middle;
    }
    if (a[left] == value)
        return left;
    else
        return -1;
}

int main()
{
    int n, q;
    cin >> n >> q;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < q; i++)
    {
        int eded;
        cin >> eded;
        int first = binarySearchFirst(array, 0, n - 1, eded);
        if (first == -1)
        {
            cout << 0 << endl;
            continue;
        }
        int last = binarySearchLast(array, first, n - 1, eded);
        cout << last - first + 1 << endl;
    }

    return 0;
}