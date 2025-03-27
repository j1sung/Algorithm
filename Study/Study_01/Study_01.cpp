#include <iostream>
#include <vector>
using namespace std;

vector<int> vv[10];

// input
//string map[26]; // 지도 크기
int n; 

// output
int cnt = 0; // 집 개수
vector<int> v; // 각 단지의 크기 저장(개수)

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

void dfs(int x, int y) {
	

	int xx;
	int yy;
	for (int i = 0; i < 4; i++) {
		xx = x + dx[i];
		yy = y + dy[i];

	}


}


int main() {
	vv[0].push_back(2);
	vv[0].push_back(3);
	vv[1].push_back(4);
	vv[2].push_back(5);

	cout << vv[0].size()<<" ";
	cout << vv->size()<<" "; // same vv[0].size();
	cout << vv->capacity()<<" "; // same vv[0].capacity(); - 할당한 메모리 공간 개수
	cout << (vv + 1)->size() << " "; // same vv[1].size();
	cout << (vv + 2)->capacity() << " "; // same vv[2].capacity();
	cout << (vv + 3)->capacity() << " "; // same vv[3].capacity();
	


	return 0;
}