#include <iostream>

int main()
{
    int x;
    int ans = 1;
    std::cin >> x;

    if (x > 31)
    {
        std::cout << "Value of more than 31" << std::endl;
    }
    else
    {
        while (x > 0)
        {
            ans = ans * 2;
            x--;
        }
        std::cout << ans << std::endl;
    }

    return 0;
}
