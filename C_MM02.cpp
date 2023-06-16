#include <iomanip>
#include <iostream>

int main()
{
    float d, h;
    std::cin >> d >> h;
    float result = d * h / 2;
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;
    return 0;
}