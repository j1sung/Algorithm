#include <iostream>
using namespace std;

int main() {
    double a, b = 0; // 0<A,B<10 / 정밀도가 15~16자리인 double을 사용하여야 조건에 해당하는 오차범위를 넘지 않는다.
    cin >> a >> b;
    cout.precision(32); //소수점 이하 자릿수 9자리 이상(10^-9이하 오차 허용이므로..)
    cout << fixed; //소수점 아래로 precision으로 넘겨준 값 만큼 출력
    cout << a / b;

    return 0;
}