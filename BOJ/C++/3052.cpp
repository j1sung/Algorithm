#include <iostream>
using namespace std;

int main(){
    int n[10], result[10]; // 배열n은 입력받는 공간, 배열result는 나머지 값 받는 공간
    int cnt = 0; // 서로 다른 나머지 갯수 카운트 1<=cnt<=10 가 될 수 있다.
    
    for(int i=0; i<10; ++i)
    {
        cin >> n[i]; // 입력 0<=n<=1000
        result[i] = n[i]%42; // 나머지 값 대입
    }
    
    for(int i=0; i<10; ++i)
    {
        // 나머지 값이 -1이 아닐 때 수행 
        if(result[i]!= -1)
        {
            // j가 i+1부터 초기화 해야 자기 다음값부터 비교하여 case가 줄어들고 자기자신과 비교하면 알고리즘 오류가 발생한다!
            for(int j=i+1; j<10; ++j) 
            {
                if(result[i] == result[j]) // result[i]에 대해서 같은 값이 있는지 전체 비교
                result[j] = -1; // 같은 값이 있었을 경우 그 배열 인덱스에 -1 대입
            }
            result[i] = -1; // 비교가 끝나면 비교 자신도 -1 대입
            ++cnt; // 같은 나머지 값들을 한 묶음으로 cnt 1 증가  
        }
    }
    cout << cnt;
    
    return 0;
}