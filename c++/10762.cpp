#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    struct mystruct
    {
        int height;
        int index;
    } soldier;

    stack<mystruct> stackk;

    int n;
    cin >> n;
    
    int list[n];

    for (int i = 0; i < n; i++)
        cin >> list[i];

    for (int j = 0; j < n; j++){
        soldier.height = list[j];
        soldier.index = j;

        if (stackk.empty()){
            stackk.push(soldier);
            cout << "-1 ";
        }
        
        else{
            if (stackk.top().height > soldier.height){
                cout << stackk.top().index << " ";
                stackk.push(soldier);
            }
            else{
                while (!stackk.empty() && stackk.top().height <= soldier.height)
                    stackk.pop();

                if (stackk.empty()){
                    stackk.push(soldier);
                    cout << "-1 ";
                }

                else{
                    cout << stackk.top().index << " ";
                    stackk.push(soldier);
                }
            }
        }
    }
}