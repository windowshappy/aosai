#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int l[10000];
    l[0] = 1;
    l[1] = 1;
    l[2] = 2;
    cin>>n;
    for (int i = 3; i <= n; i++)
    {
        l[i] = l[i - 1] + l[i - 2];

    }
    cout << l[n];

    return 0;
}
