#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

class FrequencyStack
{
public:
    map<int, int> frequencyMap;
    vector<stack<int>> vector_;

    void push(int x){
        int frequency = frequencyMap[x];
        frequencyMap[x] = frequency + 1;
        
        if (frequency == vector_.size())
            vector_.push_back(stack<int>());
            
        vector_[frequency].push(x);
    }

    int pop()
    {
        if (!vector_.empty()){
            int element = vector_.back().top();
            vector_.back().pop();
            
            if (vector_.back().empty())
                vector_.pop_back();
                
            frequencyMap[element]--;
            
            return element;
        }
    }
};

int main(){
    string command;
    FrequencyStack fs = FrequencyStack();
    while (cin >> command){
        if (command == "push"){
            int n;
            cin >> n;
            fs.push(n);
        }
        else
            cout << fs.pop() << endl;
    }
}