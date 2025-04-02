// <조건>
// 시간 제한: 1초
// 메모리 제한: 512MB

#include <iostream>
#include <vector>

using namespace std;

// vector<int> v[51];
// bool visited[2501];

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M, K;
        cin >> N >> M >> K;
        vector<int> v[N];
        bool visited[N * M];

        int X, Y;
        for (int j = 0; j < K; j++)
        {
            cin >> X >> Y;
            v[X].push_back(Y);
        }
    }
    return 0;
}