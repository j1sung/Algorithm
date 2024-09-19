int solution(int n) {
    int answer = 0;
    for(int i=2; i<=n; i+=2)
        answer += i;
    return answer;
}

int solution(int n) {
    int answer = n/2;
    answer *= answer + 1;
    return answer;
}

2
int solution(int n) {return (n>>1) * ((n>>1) + 1);}