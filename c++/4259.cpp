#include <iostream>
#include <stack>

using namespace std;

int main(void)
{

    int n;
    cin >> n;
    
    stack<int> stackk;
    stack<int> minStackk;

    for (int i = 0; i < n; i++)
    {
        int operation;
        cin >> operation;

        switch (operation)
        {

        case 1:
        {
            int x;
            cin >> x;
            
            stackk.push(x);
            if (minStackk.empty() || x < minStackk.top())
                minStackk.push(x);
            break;
        }
        case 2:
        {
            if (!stackk.empty())
            {
                int x = stackk.top();
                stackk.pop();
                
                if (minStackk.top() == x)
                    minStackk.pop();
            }
            break;
        }
        case 3:
        {
            if (!minStackk.empty())
                cout << minStackk.top() << endl;
        }

        }
    }
}