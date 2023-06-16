#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    if (x > 0 && x <= 100 && y > 0 && y <= 100)
    {
        std::cout << "inside" << std::endl;
    }
    else
    {
        std::cout << "outside" << std::endl;
    }

    return 0;
}
