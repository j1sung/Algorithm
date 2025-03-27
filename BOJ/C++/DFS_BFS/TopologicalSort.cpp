#include <iostream>
#include <bits/stdc++.h> // 표준이 아니지만 여러 헤더를 한번에 포함시킬 수 있는 헤더파일, 문제짤때만 사용

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> t(N + 1);
    vector<vector<int>> graph(N + 1);
    vector<int> indeg(N + 1); // i <- task

    for (int i = 1; i <= N; i++)
    {
        int cnt;
        cin >> t[i] >> cnt;

        while (cnt--)
        {
            int task;
            cin >> task;
            graph[task].push_back(i);
            indeg[i]++;
        }
    }

    queue<int> q;    // 위상
    vector<int> top; // 위상정렬 결과

    for (int i = 1; i <= N; i++)
    {
        if (!indeg[i])
            q.push(i);
    }

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        top.push_back(cur);

        // 간선 지우면 이웃한 정점들이 사라지는걸 반영
        for (int next : graph[cur])
        {
            indeg[next]--;
            if (!indeg[next])
                q.push(next);
        }
    }

    // task-> exec time, begin time, start time
    vector<int> start(N + 1);
    // 1243567에서
    // 2, 4는 1이 선행되어야 함 -> 쭉 반복
    for (int cur : top)
    {
        for (int next : graph[cur])
        {
            start[next] = max(start[next], s)
        }
    }

    int ans = 0;
    for (int cur : top)
    {
        ans = max(ans, start[cur] + t[cur]);
    }

    int ans = 0;

    for (int i : top)
    {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}