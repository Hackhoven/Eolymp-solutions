#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    int operations;
    cin >> operations;

    for (int i = 0; i < operations; i++)
    {
        int operation;
        cin >> operation;

        switch (operation)
        {
        case 1:
        {
            int number;
            cin >> number;
            d.push_back(number);
            break;
        }

        case 2:
        {
            int number;
            cin >> number;
            d.push_front(number);
            break;
        }

        case 3:
        {
            if (!d.empty())
            {
                int number = d.back();
                cout << number <<endl;
                d.pop_back();
                break;
            }
        }

        case 4:
        {
            if (!d.empty())
            {
                int number = d.front();
                cout << number <<endl;
                d.pop_front();
                break;
            }
        }
        
        }
    }
}