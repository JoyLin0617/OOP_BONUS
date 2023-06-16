#include <iostream>

int main()
{
    int h1, h2, m1, m2, time;
    int price = 0;

    std::cin >> h1 >> m1;
    std::cin >> h2 >> m2;

    time = ((h2 * 60 + m2) - (h1 * 60 + m1)) / 30;

    if (time <= 4)
    {
        std::cout << time * 30 << std::endl;
    }
    else if (time <= 8)
    {
        time = time - 4;
        price = price + 30 * 4 + 40 * time;
        std::cout << price << std::endl;
    }
    else
    {
        time = time - 8;
        price = price + 30 * 4 + 40 * 4 + 60 * time;
        std::cout << price << std::endl;
    }

    return 0;
}
