/*
author : Ahn Ji Sung
github : https://github.com/j1sung
title : 구구단
description : 수학,구현
*/
#include <iostream>
using namespace std;

int main(){
    int n = 0; //1<=N<=9
    cin >> n;
    for(int i=0; i<9; ++i)
    {
        cout<<n<<' '<<'*'<<' '<<i+1<<' '<<'='<<' '<<n*(i+1)<<endl;
    }
    
    return 0;
}