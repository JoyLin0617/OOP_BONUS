#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float u, d, h;
    cin >> u >> d >> h;
    float result = (u + d) * h / 2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << result << endl;
    return 0;
}