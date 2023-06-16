#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int a = 35;

    while (a <= x)
    {
        std::cout << a;

        if (a < x - 35)
        {
            std::cout << " ";
        }

        a = a + 35;
    }

    std::cout << std::endl;

    return 0;
}
