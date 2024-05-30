#include <stdio.h>
#include <list>
using namespace std;

int main() {
    list<int> l; // 빈 리스트 생성

    // 9개의 요소를 입력받아 리스트에 저장
    for (int i = 0; i < 9; ++i) {
        int v;
        scanf("%d", &v); // 1<=v<=99
        l.push_back(v); // 리스트 끝에 요소 추가
    }
    
    // 리스트에서 최댓값 찾기
    int max = l.front(); // 최댓값을 첫 번째 요소로 초기화
    int c=0, r=1;
    for (int num : l) {
        ++c;
        if (num > max) {
            max = num;
            r=c;
        }
    }
    
    // 최댓값 출력
    printf("%d\n",max);
    printf("%d", r);
    
    return 0;
}