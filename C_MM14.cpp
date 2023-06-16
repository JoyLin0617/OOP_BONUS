#include <iostream>

int main()
{
    int x, d = 0, h = 0, m = 0, s = 0;
    std::cin >> x;

    d = x / (60 * 60 * 24);
    x = x % (60 * 60 * 24);
    h = x / (60 * 60);
    x = x % (60 * 60);
    m = x / 60;
    s = x % 60;

    std::cout << d << " days" << std::endl;
    std::cout << h << " hours" << std::endl;
    std::cout << m << " minutes" << std::endl;
    std::cout << s << " seconds" << std::endl;

    return 0;
}
