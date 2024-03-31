/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 두 수 비교하기
description : 구현
*/
#include <iostream>
using namespace std;

int main(){
    int a,b = 0;
    cin>>a>>b;
    if(a>b)
        cout<<">";
    else if(a<b)
        cout<<"<";
    else
        cout<<"==";
    return 0;
}