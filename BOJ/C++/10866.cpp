#include <deque>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    deque<int> dq;
    int N=0, value=0;
    char command[20]; // 명령어 문자 크기 정도 
    scanf("%d", &N); //1<=N<=10000)
    for(int i=0; i<N; ++i){
        scanf("%s", command);
        //push_front
        if(strcmp(command,"push_front")==0){
        	scanf("%d", &value); // 주어지는 정수 1<=value<=100000
        	dq.push_front(value);
		}
		//push_back
        else if(strcmp(command,"push_back")==0){
        	scanf("%d", &value); 
        	dq.push_back(value);
		}
		//pop_front
		else if(strcmp(command, "pop_front") == 0){
			if(dq.empty()){
				printf("%d\n", -1);
			}
			else{
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		//pop_back
		else if(strcmp(command, "pop_back") == 0){
			if(dq.empty()){
				printf("%d\n", -1);
			}
			else{
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		//size
		else if(strcmp(command, "size") == 0){
			printf("%d\n", dq.size());
		}
		//empty
		else if(strcmp(command, "empty") == 0){
			printf("%d\n", dq.empty() ? 1 : 0);
		}
		//front
		else if(strcmp(command, "front") == 0){
			if(dq.empty())
				printf("%d\n", -1);
			else
				printf("%d\n", dq.front());
		}
		//back
		else if(strcmp(command, "back") == 0){
			if(dq.empty())
				printf("%d\n", -1);
			else
				printf("%d\n", dq.back());
		}
    }
    
    return 0;
}
