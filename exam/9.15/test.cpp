#include <bits/stdc++.h>

using namespace std;
string LtoR(string s, int L, int R){
    string t = s;
    char tmp = t[L];
    for (int i = L; i < R; i++)
    {
        t[i] = t[i + 1];
    }
    t[R] = tmp;
    return t;
}

int main()
{
    
    cout << (10 << (16>>1));
    return 0;
}
