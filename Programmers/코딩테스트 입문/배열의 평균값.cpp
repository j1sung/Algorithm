#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    return answer = accumulate(numbers.begin(), numbers.end(), 0)/(double)numbers.size();
}