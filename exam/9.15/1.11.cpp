#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    int i = 2;
    for (;!(a>=1000) ; i++)
    {
        a += (i - 1) * 10;
    }
    cout << i;
    cout << " " << endl;
    return 0;
}
