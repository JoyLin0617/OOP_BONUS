#include <iomanip>
#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x <= 800)
    {
        std::cout << std::fixed << std::setprecision(1) << x * 0.9 << std::endl;
    }
    else if (800 < x && x < 1500)
    {
        std::cout << std::fixed << std::setprecision(1) << x * 0.9 * 0.9 << std::endl;
    }
    else if (x >= 1500)
    {
        std::cout << std::fixed << std::setprecision(1) << x * 0.9 * 0.79 << std::endl;
    }

    return 0;
}
