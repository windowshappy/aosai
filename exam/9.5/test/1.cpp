#include <bits/stdc++.h>

using namespace std;

char encoder[26] = {'C', 'S', 'P', 0};
char decoder[26];

string st;

int main()
{
    int k = 0;
    for (int i = 0; i < 26; i++)
    {
        if (encoder[i] != 0)
            ++k;
    }
    for (char x = 'A'; x <= 'Z'; x++)
    {
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (encoder[i] == x)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            encoder[k] = x;
            k++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        decoder[encoder[i] - 'A'] = i + 'A';
    }
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        st[i] = decoder[st[i] - 'A'];
    }
    cout << st;

    return 0;
}