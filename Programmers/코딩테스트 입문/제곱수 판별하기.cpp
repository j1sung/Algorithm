#include <cmath>

int solution(int n) {
    int answer = (n%(int)sqrt(n)==0?1:2);
    return answer;
}