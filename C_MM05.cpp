#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    double x;
    std::cin >> x;
    double result = floor(x * x * 10 + 0.5) / 10;
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;

    return 0;
}
