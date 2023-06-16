#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
    {
        std::cout << "Bissextile Year\n";
    }
    else
    {
        std::cout << "Common Year\n";
    }

    return 0;
}
