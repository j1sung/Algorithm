#include <queue>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    queue<int> q;
    int N=0, value=0;
    char command[10]; // 명령어 문자 크기 정도 
    scanf("%d", &N); //1<=N<=10000)
    for(int i=0; i<N; ++i){
        scanf("%s", &command);
        //push
        if(strcmp(command,"push")==0){
        	scanf("%d", &value); // 주어지는 정수 1<=value<=100000
        	q.push(value);
		}
		//pop
		else if(strcmp(command, "pop") == 0){
			if(q.empty()){
				printf("%d\n", -1);
			}
			else{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		//size
		else if(strcmp(command, "size") == 0){
			printf("%d\n", q.size());
		}
		//empty
		else if(strcmp(command, "empty") == 0){
			printf("%d\n", q.empty() ? 1 : 0);
		}
		//front
		else if(strcmp(command, "front") == 0){
			if(q.empty())
				printf("%d\n", -1);
			else
				printf("%d\n", q.front());
		}
		//back
		else if(strcmp(command, "back") == 0){
			if(q.empty())
				printf("%d\n", -1);
			else
				printf("%d\n", q.back());
		}
    }
    
    return 0;
}
