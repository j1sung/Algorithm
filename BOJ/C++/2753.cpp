/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 윤년
description : 수학,구현,사칙연산
*/
#include <iostream>
using namespace std;

int main(){
    int y=0;
    cin >> y; // 1<=year<=4000
    if(y%4==0&&(y%100!=0||y%400==0))
        cout<<1;
    else
        cout<<0;
    
    return 0;
}