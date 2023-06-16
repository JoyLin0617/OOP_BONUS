#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    int z = x % y;
    int a = x / y;
    if (x % y < 0)
    {
        if (a > 0)
        {
            a = a + 1;
        }
        else
        {
            a = a - 1;
        }
        z = x - a * y;
    }

    std::cout << x << "+" << y << "=" << x + y << std::endl;
    std::cout << x << "*" << y << "=" << x * y << std::endl;
    std::cout << x << "-" << y << "=" << x - y << std::endl;
    std::cout << x << "/" << y << "=" << a << "..." << z << std::endl;

    return 0;
}
