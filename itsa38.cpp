#include <iomanip>
#include <iostream>

int main()
{
    int x;
    double sum, nosum;
    std::cin >> x;

    if (x <= 120)
    {
        sum = x * 2.10;
        nosum = x * 2.10;
    }
    else if (x <= 330)
    {
        x -= 120;
        sum = 120 * 2.10 + x * 3.02;
        nosum = 120 * 2.10 + x * 2.68;
    }
    else if (x <= 500)
    {
        x -= 330;
        sum = 120 * 2.10 + 210 * 3.02 + x * 4.39;
        nosum = 120 * 2.10 + 210 * 2.68 + x * 3.61;
    }
    else if (x <= 700)
    {
        x -= 500;
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + x * 4.97;
        nosum = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + x * 4.01;
    }
    else
    {
        x -= 700;
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + 5.63 * x;
        nosum = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + 4.50 * x;
    }

    std::cout << std::fixed << std::setprecision(2) << "Summer months:" << sum << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Non-Summer months:" << nosum << std::endl;

    return 0;
}
