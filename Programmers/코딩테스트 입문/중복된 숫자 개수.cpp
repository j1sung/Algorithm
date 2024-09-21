#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    // int size = sizeof(array)/sizeof(array[0]); 배열의 크기는 이렇게
    
    // #1
    for(int i=0; i<array.size(); i++)
    {
        if(array[i] == n)
            answer++;
    }
    // #2
    for(auto i : array) if(i == n) answer++;

    // #3
    auto it = find(array.begin(), array.end(), n);
    while(it != array.end())
    {
        answer++;
        it = find(it+1, array.end(), n);
    }

    // #4 
    answer = count(array.begin(),array.end(),n);
    
    return answer;
}