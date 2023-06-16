#include <iostream>

int main()
{
    int x, a, b, c;
    std::cin >> x;
    a = x / 10;
    x = x - 10 * a;
    b = x / 5;
    c = x - 5 * b;
    std::cout << "NT10=" << a << std::endl;
    std::cout << "NT5=" << b << std::endl;
    std::cout << "NT1=" << c << std::endl;

    return 0;
}
