#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main(){
    const int size = 50;
    char a[size][size];
    char b[size];
    int n=0;

    scanf("%d\n", &n);

    for(int i=0; i<n; ++i){
        scanf("%s", a[i]);
    }

    if (n==1)
    {
        printf("%s",a[0]);
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = i+1; j < n-i; ++j)
            {
                for (int z = 0; z < strlen(a[0]); ++z)
                {
                    if(a[i][z]!=a[j][z]){
                        b[z]='?';
                    }
                    if(b[z]!='?')
                    {
                        b[z]=a[i][z];
                    }
                }
            }
        }
    }
    for (int i = 0; i <strlen(b); ++i)
    {
        printf("%c", b[i]);
    }
    

    return 0;
}