#include <iostream>
#include <chrono>
using namespace std;

#define _MEASURE_START(STR) auto start_##STR = chrono::steady_clock::now();
#define _MEASURE_END(STR)                                                                    \
    chrono::duration<double> duration_sec_##STR = chrono::steady_clock::now() - start_##STR; \
    cout << "time(sec): " << duration_sec_##STR.count() << " sec\n";

int main()
{
    // auto start = chrono::steady_clock::now();
    _MEASURE_START();

    // 시간 측정 소스 코드
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
            cout << "hello world\n";
    }

    // auto end = chrono::steady_clock::now();
    // chrono::duration<double> sec = end - start;
    // cout << "time(sec): " << sec.count();

    _MEASURE_END();

    return 0;
}