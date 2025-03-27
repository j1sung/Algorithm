#include <iostream>
#include <vector>
using namespace std;

std::vector<int> v[100];

int main() {
	v[1].push_back(2);
	v[1].push_back(3);

	for (int i = 0; i < v[1].size(); i++) {
		cout << v[1][i] << endl;
	}

	return 0;
}