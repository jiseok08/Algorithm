#include <iostream>

using namespace std;

void sieve(int n)
{
    int* list = new int[n];
    
    for (int i = 0; i <= n; i++)
    {
        list[i] = i;
    }

    delete[0] list;
    delete[1] list;

    for (int i = 2; i <= n; i++)
    {
        if (list[i] != 2 && list[i] % 2 == 0)
        {
            list[i] = 0;
        }
        if (list[i] != 3 && list[i] % 3 == 0)
        {
            list[i] = 0;
        }
    }
}

int main()
{
#pragma region 에라토스테네스의 체
    
    int j = 0;
    int n = 0;

    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        for (j = 2; j < n; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (i == j)
        {
            cout << i << " ";
        }
    }

#pragma endregion




    return 0;
}