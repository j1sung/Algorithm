/*
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0; i<numbers.size(); i++)
    {
        answer.push_back(numbers[i]*2);
    }
    
    return answer;
}
*/

#include <vector>
#include <algorithm>  // std::transform 사용

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());  // 미리 벡터 크기 할당

    // std::transform 사용
    transform(numbers.begin(), numbers.end(), answer.begin(), [](int n) {
        return n << 1; // 2를 곱하는건 시프트 연산으로 하면 더 빠름!
    });

    return answer;
}

