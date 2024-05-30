#include<stdio.h>
#include<queue>
using namespace std;

int main(){
    
    int n=0, k=0;
    scanf("%d %d", &n, &k);

    queue<int> q;
    for(int i=1; i<=n; ++i){
        q.push(i);
    }

    printf("<");
    while(q.size()>1){
        for(int i=1; i<k; ++i){
            int r = q.front();
            q.pop();
            q.push(r);
        }
        printf("%d, ", q.front()); // K번째 값 출력
        q.pop(); // K번째 값 삭제
    }
    printf("%d>", q.front());

    return 0;
}