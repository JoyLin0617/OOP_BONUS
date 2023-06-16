#include <iostream>

int main()
{
    int x, y, sum = 0;
    std::cin >> x >> y;

    for (int i = x; i <= y; i++)
    {
        sum = sum + i;
    }

    std::cout << sum << std::endl;

    return 0;
}
