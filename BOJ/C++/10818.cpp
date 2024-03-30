/*
#1. 배열 / sort()
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, min_n, max_n = 0; // 입력 N의 범위, 1<=N<=1000000
    cin>>N; // 한 줄을 읽게 바꿔보자 getline()
    
    int arr[N]; // 문제가 됨!!
    for(int i=0; i<N; ++i)
    {
        cin>>arr[i];
    }
    sort(arr, arr+N);
    min_n = arr[0];
    max_n = arr[N-1];
    
    cout<<min_n<<' '<<max_n;

    return 0;
}
*/

/*
#1-1 배열 / sort() - vector 사용
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int min_n = arr[0];
    int max_n = arr[N - 1];

    cout << min_n << ' ' << max_n;

    return 0;
}
*/

/*
#1-2 배열 / sort() - 동적으로 크기가 N인 배열 생성
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N]; // 동적으로 크기가 N인 배열 생성

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // 최솟값과 최댓값 구하기
    int min_n = *min_element(arr, arr + N);
    int max_n = *max_element(arr, arr + N);

    cout << min_n << ' ' << max_n;

    // 동적으로 할당된 메모리 해제
    delete[] arr;

    return 0;
}
*/

/*
#2. 직접 max, min 구현
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, min_n, max_n = 0; // 입력 N의 범위, 1<=N<=1000000
    cin>>N; // 한 줄을 읽게 바꿔보자 getline()
    //vector<int> v(n); 벡터 사용해보기
    int arr[N];
    for(int i=0; i<N; ++i) //반복자 사용도 해보자
    {
        cin>>arr[i];
    }
    
    //배열 크기 직접 구하기
    //int arr_size = sizeof(arr)/sizeof(arr[0]);
    min_n = arr[0];
    max_n = arr[0];
    
    //최솟값, 최댓값 구하기
    for (int i = 1; i < N; ++i) 
    {
        if (arr[i] > max_n) 
        {
            max_n = arr[i];
        }
        if (arr[i] < min_n) 
        {
            min_n = arr[i];
        }
    }
    
    cout<<min_n<<' '<<max_n;

    return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N = 0; // 입력 N의 범위, 1<=N<=1000000
    cin>>N; // 한 줄을 읽게 바꿔보자 getline()
    vector<int> v(N);
    for(auto iter = v.begin(); iter!=v.end(); ++iter) //반복자 사용도 해보자
    {
        cin>>*iter;
    }
    auto min_n = min_element(v.begin(), v.end()); //min_element()
    auto max_n = max_element(v.begin(), v.end()); //max_element()

    cout<<*min_n<<' '<<*max_n; // min_n, max_n은 모두 반복자를 가리키고 그 요소 값은 *를 사용하여 출력

    return 0;
}