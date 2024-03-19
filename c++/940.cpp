#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int array[n];
    
    for (int i = 0; i < n; i++)
        cin >> array[i];

    stack<int> stackk;
    int majorityElement = 0, count = 0;

    for (int j = 0; j < n; j++) {
        if (stackk.empty())  stackk.push(array[j]); 
        if (stackk.top() == array[j])  stackk.push(array[j]); 
        else  stackk.pop(); 
    }

    if (!stackk.empty()) {
        majorityElement = stackk.top();

        for (int k = 0; k < n; k++)
            if (array[k] == majorityElement)  count++;
    }

    if (2 * count > n)  cout << majorityElement << endl;
    else  cout << "-1";
}