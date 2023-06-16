#include <iostream>

int main()
{
    int x, a, b, c;
    std::cin >> x;
    a = x / 100;
    b = (x % 100) / 10;
    c = x % 10;

    if (x == (a * a * a + b * b * b + c * c * c))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
