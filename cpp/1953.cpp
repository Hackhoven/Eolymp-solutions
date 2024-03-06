#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<pair<int,int>>& v, int length)
{
    for(int i = 0; i < length; i++)
    {
        int max = i;
        for(int j = i+1; j < length; j++)
        {
            if( v[j].second > v[max].second ||
            (v[j].second == v[max].second && v[j].first < v[max].first) )
                max = j;
        }
        swap(v[max], v[i]);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
    {
        int eded;
        cin >> eded;
        v[i] = {i+1, eded};
    }

    selectionSort(v, n);

    for( auto p : v )
        cout << p.first << " ";

    return 0;
}