#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int MAX = 9;

vector<int> v[MAX];

bool visited[MAX];

void bfs(int start)
{
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << ' ';

        for (int i = 0; i < v[x].size(); i++)
        {
            int y = v[x][i];
            if (!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main()
{
    v[1].push_back(2);
    v[1].push_back(3);
    v[1].push_back(8);

    v[2].push_back(1);
    v[2].push_back(7);

    v[3].push_back(1);
    v[3].push_back(4);
    v[3].push_back(5);

    v[4].push_back(3);
    v[4].push_back(5);

    v[5].push_back(3);
    v[5].push_back(4);

    v[6].push_back(7);

    v[7].push_back(2);
    v[7].push_back(6);
    v[7].push_back(8);

    v[8].push_back(1);
    v[8].push_back(7);

    bfs(1);

    return 0;
}