#include <iostream>

using namespace std;

void search(int list[], int key, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int pivot = (left + right) / 2;

        if (list[pivot] == key)
        {
            cout << "key found : " << list[pivot] << endl;

            return;
        }
        else if (list[pivot] > key)
        {
            right = pivot - 1;
        }
        else
        {
            left = pivot + 1;
        }
    }

    cout << "not key found" << endl;
}

int main()
{
#pragma region 이진 탐색
    // 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
    // 좁혀나가는 방식으로 동작하는 알고리즘입니다.

    int list[] = { 1, 2, 15, 19, 33, 45, 60 };

    int size = sizeof(list) / sizeof(list[0]);

    search(list, 60, size);


#pragma endregion


    return 0;
}