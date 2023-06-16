#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    while (x > 0 && y > 0)
    {
        if (x > y)
        {
            x = x % y;
        }
        else
        {
            y = y % x;
        }
    }

    if (x == 0)
    {
        std::cout << y << std::endl;
    }
    else
    {
        std::cout << x << std::endl;
    }

    return 0;
}
