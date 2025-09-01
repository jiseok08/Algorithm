#include <iostream>
#include <vector>

using namespace std;

#define INFINITY 10000000

template <typename T>
class Dijkstra
{
private:
    vector<vector<T>> adjacencyList;
    vector<T> distance;
    vector<int> visited;

    int size = 0;
public:
    Dijkstra()
    {
        resize(1);
    }

    void resize(int node)
    {
        int newSize = node + 1;

        if (size < newSize)
        {
            vector<vector<T>> * newList = new vector<vector<T>>;

            for (int i = 0; i < newSize; i++)
            {
                for (int j = 0; j < newSize; j++)
                {
                    if (i == j)
                    {
                        newList[i][j] = 0;
                    }
                    else if (adjacencyList[i][j] != INFINITY)
                    {
                        newList[i][j] = adjacencyList[i][j];
                    }
                    else
                    {
                        newList[i][j] = INFINITY;
                    }

                    adjacencyList[i][j] = newList[i][j];
                }
            }
        }

        size = newSize;
    }

    void insert(int i, int j, int weigth)
    {


        adjacencyList[i].push_back(j);
        adjacencyList[j].push_back(i);

    }
};

int main()
{
#pragma region 다익스트라 알고리즘
    // 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
    // 알고리즘 입니다.

    // 1. 거리 배열에서 weight[시작 노드]의 값들로 초기화합니다.

    // 2. 시작점을 방문 처리합니다.

    // 3. 거리 배열에서 최소 비용 노드를 찾고 방문 처리합니다.

    // 4. 최소 비용 노드를 거쳐갈 지 고민해서 거리 배열을 갱신합니다.
    //    단, 이미 방문한 노드는 제외합니다.

    // 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

    // 방문하지 않은 노드 중에서 가장 작은 거리를 가진 노드를
    // 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.

    Dijkstra<int> dijkstra;

#pragma endregion


    return 0;
}