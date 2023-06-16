#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x == 3 || x == 4 || x == 5)
    {
        std::cout << "Spring" << std::endl;
    }
    else if (x == 6 || x == 7 || x == 8)
    {
        std::cout << "Summer" << std::endl;
    }
    else if (x == 9 || x == 10 || x == 11)
    {
        std::cout << "Autumn" << std::endl;
    }
    else if (x == 12 || x == 1 || x == 2)
    {
        std::cout << "Winter" << std::endl;
    }

    return 0;
}
