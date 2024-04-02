#include <cstdio>
using namespace std;

int main(){
    int n=0, cnt=0, res=0;
    scanf("%d", &n); // 1<=N<=100

    for(int i=0; i<n; ++i)
    {
        int val;
        scanf("%d", &val); //1<=val<=1000
        if(val!=1)
        {
            for(int j=2; j<val; ++j)
            {
                if(val%j==0)
                    ++cnt;
            }
            if(cnt==0)
                ++res;
            cnt=0;
        }
    }
    
    printf("%d", res);

    return 0;
}