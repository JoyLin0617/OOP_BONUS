#include <iostream>

int main()
{
    int x;
    int sum = 0;
    std::cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
