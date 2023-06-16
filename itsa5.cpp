#include <iostream>

int main()
{
    int x[8] = {0};
    int num;
    int i = 7;

    std::cin >> num;

    if (num > 0)
    {
        while (num > 0)
        {
            x[i] = num % 2;
            num = num / 2;
            i--;
        }
    }
    else
    {
        num = num + 256;
        while (num > 0)
        {
            x[i] = num % 2;
            num = num / 2;
            i--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        std::cout << x[i];
    }
    std::cout << std::endl;

    return 0;
}
