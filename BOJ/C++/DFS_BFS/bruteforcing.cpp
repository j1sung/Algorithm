#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> v(N + 1); // struct pair 구조체{int first, int second}
    // 집합에 들어있는지 판단할 수 있는 자료구조
    set<pair<int, int>> s;

    for (int i = 1; i <= N; i++)
    {

        cin >> v[i].first >> v[i].second;
        s.insert(v[i]);
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            // 두 점이 같은 수직으로 있으면 너비가 0이라 안됨!
            if (v[i].first == v[j].first)
                continue;
            if (v[i].second == v[j].second)
                continue;
            // p1, p2 점 구하기 -> i와 j가 반대일 수도 있음
            pair<int, int> p1(v[i].first, v[j].second);

            pair<int, int> p2(v[j].first, v[i].second);
            if (s.count(p1) && s.count(p2))
                continue;
        }
    }

    // 마지막 출력 구현..

    return 0;
}