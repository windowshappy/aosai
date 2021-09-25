#include <bits/stdc++.h>

using namespace std;

char s[10000];
int cnt[26];

int main()
{
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (cnt[s[i] - 'a'] <= 50)
        {
            s[strlen(s)] = s[i];
        }

        ++cnt[s[i] - 'a'];
    }

    cout << s;

    return 0;
}
