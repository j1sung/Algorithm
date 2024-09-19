int solution(int angle) {
    if(0<angle && angle<90)
        return 1;
    else if(angle==90)
        return 2;
    else if(90<angle && angle<180)
        return 3;
    else if(angle == 180)
        return 4;
    return -1; // 예외적인 상황 -1으로 표현, 0은 주로 일반적인 성공
}

int solution(int angle) {
    return (angle % 90 != 0 ? angle/90*2 + 1 : angle/90*2);
}