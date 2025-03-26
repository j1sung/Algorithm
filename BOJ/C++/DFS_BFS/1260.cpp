// <����>
// �ð�����: 2��
// �޸� ����: 128MB

#include <iostream>
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
	}
	/*
	for (int i = 0; i < 1001; i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				cout << v[i][j] << ' ';
			}
		}
	*/

	dfs(V);
	cout << endl;

	bfs(V);

	return 0;
}