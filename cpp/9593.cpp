#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSequences(const vector<int>& sequence1, const vector<int>& sequence2) {
    vector<int> result;
    int i = 0;
    int j = 0;

    while ( i < sequence1.size() &&  j < sequence2.size()) 
    {
        if (sequence1[i] < sequence2[j]) 
        {
        result.push_back(sequence1[i]);
        i++;
        } 
        else 
        {
        result.push_back(sequence2[j]);
        j++;
        }
    }

    while ( i < sequence1.size()) 
    {
        result.push_back(sequence1[i]);
        i++;
    }

    while ( j < sequence2.size()) 
    {
        result.push_back(sequence2[j]);
        j++;
    }

    return result;
}

int main() {

    int say1, say2;
    
    cin >> say1;
    vector<int> sequence1;
    for(int i = 0; i < say1; ++i)
    {
        int x;
        cin >> x;
        sequence1.push_back(x);
    }

    cin >> say2;
    vector<int> sequence2;
    for(int i = 0; i < say2; ++i)
    {
        int x;
        cin >> x;
        sequence2.push_back(x);
    } 

    vector<int> result = mergeSequences(sequence1, sequence2);

    for (int nums : result) {
        cout << nums << " ";
    }

    return 0;
}