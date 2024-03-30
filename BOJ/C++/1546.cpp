#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N=0; // 크기는 정수값만 가능
    float sum, avg=0; //실제 정답과 출력값의 절대오차 또는 상대오차가 10^2 이하이면 정답이므로 정밀도 6~7을 갖는 float를 써도 ㄱㅊ을듯!
    
    cin>>N; // 1<=N<=1000
    vector<float> v(N); // 크기 N 벡터 생성
    
    for(auto iter = v.begin(); iter!=v.end(); ++iter)
    {
        cin>>*iter; // 0<=*iter<=100, 적어도 한개는 0보다 크다.
    }
    
    auto M = max_element(v.begin(), v.end()); // 최댓값 구하기
    
    for(auto iter = v.begin(); iter!=v.end(); ++iter)
    {   // iteraitor 쓸 때, 값을 이용하면 *포인터를 붙이는걸 잊지말자! -> M에 포인터 까먹었었음!
        sum += *iter / *M * 100; // 거짓 점수들 총 합 구하기, 포인터 *가 연산중에 앞의 변수나 연산자와 붙으면
    }                            // 곱셈*으로 인식되거나 오류가 발생하여 뛰어쓰기나 괄호를 하자!
    
    avg = sum/N;
    
    cout.precision(14); // 자리수 지정
    cout<<fixed; // 소수점 이하의 자리수를 지정하기 위해
    cout<<avg;
    
    return 0;
}