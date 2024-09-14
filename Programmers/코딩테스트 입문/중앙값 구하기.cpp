// 문제 설명
// 중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다.
// 예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다. 
// 정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.

/* 알고리즘
    개수가 홀수라는 가정 하에 중앙값이 나오게 된다.
    1) 배열의 값들을 크기 순서대로 정렬 시켜야 한다.
    2) 개수를 2로 나눈 몫에 1을 더한 위치가 중앙값이다.
    이 중앙값의 위치를 인덱스로 배열에서 중앙값을 구한다.
*/

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    sort(array.begin(), array.end()); // 오름차순 정렬
    return answer = array[array.size()/2];  // 중앙값 구하기
}