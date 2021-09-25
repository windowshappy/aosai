#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, score[1001], maxn = ~0x3f3f3f3f;
    string name[1001];
    map<string, int> S, S1;
    cin >> n;
    int t = n;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> score[i];
        S[name[i]] += score[i];
    }
    for (int i = 0; i < n; i++)
        maxn = max(maxn, S[name[i]]);
    for (int i = 0; i < n; i++)
    {
        S1[name[i]] += score[i];
        if (S[name[i]] == maxn && S1[name[i]] >= maxn)
        {
            cout << name[i];
            return 0;
        }
    }
    return 0;
}
