#include<cstdio>
using namespace std;

int main(){
    int n=0, cnt=0;
    scanf(%d, &n);
    int arr[1000];
    for(int i=0; i<n; ++i)
    {
        scanf(%d, &arr[i]);
        for(int j=2; j<arr[i]; ++j)
        {
            if(arr[i]%j==0)
                break;
                
        }
    }
    


    return 0;
}