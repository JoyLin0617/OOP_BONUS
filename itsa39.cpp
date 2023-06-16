#include <iostream>
#include <vector>

int main()
{
    int num;
    std::cin >> num;
    std::vector<char> result(num);

    for (int i = 0; i < num; i++)
    {
        int x, y, z;
        std::cin >> x >> y >> z;

        if (x >= 60 && y >= 60 && z >= 60)
        {
            result[i] = 'P';
        }
        else if (x < 60 && y >= 60 && z >= 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x >= 60 && y < 60 && z >= 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x >= 60 && y >= 60 && z < 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x < 60 && y < 60 && z >= 60)
        {
            if (z >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else if (x < 60 && y >= 60 && z < 60)
        {
            if (y >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else if (x >= 60 && y < 60 && z < 60)
        {
            if (x >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else
        {
            result[i] = 'F';
        }
    }

    for (int i = 0; i < num; i++)
    {
        std::cout << result[i] << std::endl;
    }

    return 0;
}
