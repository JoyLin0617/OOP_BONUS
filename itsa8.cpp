#include <iostream>

int main()
{
    int x;
    int prime = 1;
    std::cin >> x;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
