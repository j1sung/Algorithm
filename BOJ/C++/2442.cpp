/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 별 찍기 - 5
description : 구현
*/
#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n; //1<N<=100

    // for문 실행 순서가 증감연산자가 내용 수행 이후 실행되어 ++i, i++는 내용 반영이 바로 되진 않지만 실행 시 속도는 ++i가 더 빠름!
    for (int i = 1; i < n+1; ++i)
    {
        //cout<<i<<endl;
        cnt = 2 * i - 1; //한 줄에서 별의 갯수 (2*i)-1
        //cout<<cnt<<endl;

        // 한 줄에서 공백 갯수 {(2n-1)-cnt}÷2
        for (int j = 0; j < (((2 * n - 1) - cnt) / 2); ++j)
        {
            cout << ' ';
        }
        for (int j = 0; j < cnt; ++j)
        {
            cout << '*';
        }
        /* 생각없이 뒤에 공백까지 맞춰 넣었다가 백준 출력형식 잘못되었다는 오류를 받음 -> 대부분 공백이 문제라 한다.
        for (int j = 0; j < (((2 * n - 1) - cnt) / 2); ++j)
        {
            cout << ' ';
        }
        cout << endl;
        */
        
    }

    return 0;
}
