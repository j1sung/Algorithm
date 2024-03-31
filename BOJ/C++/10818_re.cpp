/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 최소, 최대
description : 수학,구현
*/
// 진짜 배열 안써도 되는건 왜 생각을 못했지!!
#include <cstdio>
#include <limits> // numeric_limits 사용
using namespace std;

int main() {
    int n;
    scanf("%d",&n);

    int max_n = numeric_limits<int>::min(); // 최대값 초기화
    int min_n = numeric_limits<int>::max(); // 최소값 초기화

    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d",&num);

        if (num > max_n) {
            max_n = num;
        }

        if (num < min_n) {
            min_n = num;
        }
    }

    printf("%d %d", min_n, max_n);

    return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	
    int n=0, max_x=0, min_n=0;
    int arr[1000]; 

    scanf("%d", &n);

    for(int i=0; i<n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    max_n = arr[0];
    min_n = arr[0];

    for(int i=1; i<n; ++i)
    {
        if(arr[i]>max_n)
            max_n = arr[i];
        if(arr[i]<min_n)
            min_n = arr[i];
    }
    printf("%d %d", min_n, max_n);

    return 0;

}
*/
