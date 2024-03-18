#include <iostream>
#include <cmath>
#include <iomanip> // for setprecision
using namespace std;

double C; // input value

// function to calculate the task
double f(double x) 
{
    return x*x + sqrt(x) - C;
}

int main() {
    cin >> C;

    //binary search
    double left = 0, right = C; 

    while (right - left > 1e-7) 
    { 
        double mid = (left + right) / 2;
        if (f(mid) > 0) 
            right = mid;
        else  
            left = mid;
    }

    // setpreciison usage
    cout << fixed << setprecision(6) << left << endl;

    return 0;
}