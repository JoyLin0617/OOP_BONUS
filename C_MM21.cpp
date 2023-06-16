#include <iostream>

int main()
{
    int x;
    long long a = 1;
    std::cin >> x;

    for (int i = 1; i <= x; i++)
    {
        a = a * i;
    }

    std::cout << a << std::endl;

    return 0;
}
