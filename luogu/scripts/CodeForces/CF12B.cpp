#include <bits/stdc++.h>

using namespace std;

bool cmp(const char a, const char b)
{
    int a1 = a - '0';
    int b1 = b - '0';
    return a1 < b1;
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size())
    {
        cout << "WRONG_ANSWER";
        return 0;
    }
    sort(a.begin(), a.end(), cmp);
    if (a[0] == '0')
    {
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] != '0')
            {
                swap(a[0], a[i]);
                break;
            }
        }
    }
    if (a == b)
    {
        cout << "OK";
    }
    else
    {

        cout << "WRONG_ANSWER";
    }
    return 0;
}
