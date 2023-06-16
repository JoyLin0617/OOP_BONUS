#include <iomanip>
#include <iostream>

int main()
{
    int s;
    float h;
    while (std::cin >> h >> s)
    {
        if (s == 1)
        {
            std::cout << std::fixed << std::setprecision(1) << (h - 80) * 0.7 << std::endl;
        }
        else
        {
            std::cout << std::fixed << std::setprecision(1) << (h - 70) * 0.6 << std::endl;
        }
    }

    return 0;
}
