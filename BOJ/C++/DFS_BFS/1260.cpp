// <조건>
// 시간 제한: 2초
// 메모리 제한: 128MB

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[1001];
bool visited[10001];

int N, M, V; // 1<=N<=1000, 1<=M<=10000
int a, b;	 // 1<=a<=1000, 1<=b<=10000

void dfs(int x)
{
	visited[x] = true;
	cout << x << ' ';

	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];
		if (!visited[y])
			dfs(y);
	}
}

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
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 0; i <= N; i++)
	{
		sort(v[i].begin(), v[i].end());
	}

	dfs(V);
	for (int i = 0; i <= N; i++)
	{
		visited[i] = false;
	}
	cout << endl;

	bfs(V);

	return 0;
}