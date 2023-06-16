#include <iostream>

int main()
{
    int m, d;
    std::cin >> m >> d;

    if ((m == 1 && d >= 21) || (m == 2 && d <= 18))
    {
        std::cout << "Aquarius" << std::endl;
    }
    else if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
    {
        std::cout << "Pisces" << std::endl;
    }
    else if ((m == 3 && d >= 21) || (m == 4 && d <= 20))
    {
        std::cout << "Aries" << std::endl;
    }
    else if ((m == 4 && d >= 21) || (m == 5 && d <= 21))
    {
        std::cout << "Taurus" << std::endl;
    }
    else if ((m == 5 && d >= 22) || (m == 6 && d <= 21))
    {
        std::cout << "Gemini" << std::endl;
    }
    else if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
    {
        std::cout << "Cancer" << std::endl;
    }
    else if ((m == 7 && d >= 23) || (m == 8 && d <= 23))
    {
        std::cout << "Leo" << std::endl;
    }
    else if ((m == 8 && d >= 24) || (m == 9 && d <= 23))
    {
        std::cout << "Virgo" << std::endl;
    }
    else if ((m == 9 && d >= 24) || (m == 10 && d <= 23))
    {
        std::cout << "Libra" << std::endl;
    }
    else if ((m == 10 && d >= 24) || (m == 11 && d <= 22))
    {
        std::cout << "Scorpio" << std::endl;
    }
    else if ((m == 11 && d >= 23) || (m == 12 && d <= 21))
    {
        std::cout << "Sagittarius" << std::endl;
    }
    else if ((m == 12 && d >= 22) || (m == 1 && d <= 20))
    {
        std::cout << "Capricorn" << std::endl;
    }

    return 0;
}
