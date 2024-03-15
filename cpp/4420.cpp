#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    double x = 1.0;

    while (true)
    {
        double fx = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
        double f1x = 3 * a * pow(x, 2) + 2 * b * x + c;

        double xn = x - fx / f1x;

        if (abs(x - xn) < 1e-6)
        {
            cout << fixed << setprecision(6) << xn;
            break;
        }

        x = xn;
    }

    return 0;
}