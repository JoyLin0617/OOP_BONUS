#include <iomanip>
#include <iostream>

int main()
{
    int x, y;
    double m;
    std::cin >> x >> y;

    if (x < 60)
    {
        m = x * y;
    }
    else if (x <= 120)
    {
        m = (x - 60) * y * 1.33 + 60 * y;
    }
    else if (x > 120)
    {
        m = (x - 120) * y * 1.66 + 60 * y * 1.33 + 60 * y;
    }

    std::cout << std::fixed << std::setprecision(1) << m << std::endl;

    return 0;
}
