#include <vector>

using namespace std;

// (분자1*분모2+분자2*분모1), (분모끼리 곱) 각각에 최대공약수(GDC)를 나눠준다.
// 최대공약수는 유클리드 호제법을 이용하여 구한다.
int gcd(int n, int d)
{
    while(n!=0)
    {
        int temp = n;
        n = d%n;
        d = temp;
    }
    return d;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int numer = numer1*denom2+numer2*denom1;
    int denom = denom1*denom2;

    answer.push_back(numer/gcd(numer, denom));
    answer.push_back(denom/gcd(numer, denom));

    return answer;
}
