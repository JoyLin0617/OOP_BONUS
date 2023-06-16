#include <iomanip>
#include <iostream>

int main()
{
    float x;
    std::cin >> x;

    std::cout << std::fixed << std::setprecision(1) << x * 9 / 5 + 32 << std::endl;

    return 0;
}
