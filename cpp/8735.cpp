#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> train(n);
        for (int i = 0; i < n; i++) 
            cin >> train[i];

        int countOfSwaps = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (train[i] > train[j])
                {
                    swap(train[i], train[j]);
                    countOfSwaps++;
                }
            }
        }

        cout << "Optimal train swapping takes " << countOfSwaps << " swaps." << '\n';
    }

    return 0;
}