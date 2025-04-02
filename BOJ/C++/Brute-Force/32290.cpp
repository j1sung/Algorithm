/*
시간 제한: 2초 -> 2*10^9
메모리 제한: 1024MB
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    unsigned int l, r, x;
    cin >> l >> r >> x;

    set<int> s;

    for (unsigned int i = l; i <= r; i++)
    {
        s.insert(i | x);
    }

    for (int i = 0;; i++)
    {
        unsigned int res = i;
        if (!s.count(res))
        {
            cout << res;
            return 0;
        }
    }
}

/*
#include <iostream>
using namespace std;

int main()
{
    #include "bits/stdc++.h"
using namespace std;

int main(){
    unsigned int l, r, x;
    cin >> l >> r >> x;

    set<int> s;

    for(unsigned int i=l; i<=r; i++)
    {
        s.insert(i | x);
    }

    for(int i=0; ; i++)
    {
        unsigned int res = i;
        if(!s.count(res))
        {
            cout << res;
            return 0;
        }
    }
}

    unsigned int l, r, x;
    cin >> l >> r >> x;

    unsigned int size = r - l + 1;

    unsigned int v[size];

    for (unsigned int i = 0; i < size; i++)
    {
        v[i] = ((l + i) | x);
    }

    for (unsigned int i = 0;; i++)
    {
        bool found = false;
        for (unsigned int j = 0; j < size; j++)
        {
            if (i == v[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
*/