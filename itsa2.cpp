#include <iomanip>
#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    double y = x * 1.6;
    std::cout << std::fixed << std::setprecision(1) << y << std::endl;
    return 0;
}