/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 평균
description : 수학, 사칙연산
*/
#include <cstdio>
#include <algorithm>
#include <array>
using namespace std;

int main(){
    int N=0; // 크기는 정수값만 가능
    float sum=0, avg=0; //실제 정답과 출력값의 절대오차 또는 상대오차가 10^2 이하이면 정답이므로 정밀도 6~7을 갖는 float를 써도 ㄱㅊ을듯!
    
    scanf("%d", &N); // 1<=N<=1000
    array<float, 1000> arr;
    
    for(auto iter = arr.begin(); iter!=arr.begin()+N; ++iter)
    {
        scanf("%f", iter); // 0<=*iter<=100, 적어도 한개는 0보다 크다.
    }
    
    auto M = max_element(arr.begin(), arr.begin()+N); // 최댓값 구하기
    
    for(auto iter = arr.begin(); iter!=arr.begin()+N; ++iter)
    {   // iteraitor 쓸 때, 값을 이용하면 *포인터를 붙이는걸 잊지말자! -> M에 포인터 까먹었었음!
        sum += *iter / *M * 100; // 거짓 점수들 총 합 구하기, 포인터 *가 연산중에 앞의 변수나 연산자와 붙으면
    }                            // 곱셈*으로 인식되거나 오류가 발생하여 뛰어쓰기나 괄호를 하자!
    
    avg = sum/N;
    
    printf("%.14f", avg);
    
    return 0;
}

/*
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int N=0; // 크기는 정수값만 가능
    float sum=0, avg=0; //실제 정답과 출력값의 절대오차 또는 상대오차가 10^2 이하이면 정답이므로 정밀도 6~7을 갖는 float를 써도 ㄱㅊ을듯!
    
    scanf("%d", &N); // 1<=N<=1000
    float arr[1000];
    
    for(int i=0; i<N; ++i)
    {
        scanf("%f", &arr[i]); // 0<=*iter<=100, 적어도 한개는 0보다 크다.
    }
    
    float max_n = arr[0];
    
    for(int i=1; i<N; ++i)
    {
	    if(arr[i]>max_n)
		    max_n = arr[i];
    }
    
    for(int i=0; i<N; ++i)
    {   
        sum += arr[i] / max_n * 100; // 거짓 점수들 총 합 구하기, 포인터 *가 연산중에 앞의 변수나 연산자와 붙으면
    }
    
    avg = sum/N;
    printf("%.14f", avg);

    return 0;
}
*/