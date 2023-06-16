#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    std::cout << std::fixed << std::setprecision(0) << ceil(x / (1 - 30 * 2.54 / 100)) << std::endl;

    return 0;
}
