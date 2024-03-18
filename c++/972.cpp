#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int hours[n], minutes[n], seconds[n], times[n];

    for(int i = 0; i < n; i++)
    {
        cin >> hours[i] >> minutes[i] >> seconds[i];
        times[i] = hours[i] * 3600 + minutes[i] * 60 + seconds[i];
    }


    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if( times[min] > times[j])
                min = j;
        }
        swap(times[min], times[i]);
        swap(hours[min], hours[i]);
        swap(minutes[min], minutes[i]);
        swap(seconds[min], seconds[i]);
    }

    for(int i = 0; i < n; i++)
        cout << hours[i] << " " << minutes[i] << " " << seconds[i] << endl;

    return 0;
}