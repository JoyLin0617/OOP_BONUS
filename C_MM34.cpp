#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            std::cout << i;
            if (x == i)
            {
                break;
            }
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}