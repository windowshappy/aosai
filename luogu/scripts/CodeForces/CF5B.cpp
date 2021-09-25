#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a[1002];
    int cnt = 0, maxn = -45;
    while (getline(cin, a[++cnt]))
    {
        maxn = max(maxn, (int)a[cnt].size());
    }
    for (int i = 0; i < maxn + 2; i++)
    {
        cout << "*";
    }
    cout << endl;
    int isleft = 0;
    for (int i = 1; i < cnt; i++)
    {
        cout << "*";
        if (a[i].size() == maxn)
        {
            cout << a[i] << "*" << endl;
            continue;
        }
        if ((maxn - a[i].size()) % 2 == 0)
        {
            string temp((maxn - a[i].size()) / 2, ' ');
            cout << temp << a[i] << temp << "*" << endl;
        }
        else
        {
            string temp(floor((double)(maxn - a[i].size()) / 2), ' ');
            if (isleft%2 ==0)
                cout << temp << a[i] << temp << " *" << endl;
            else if(isleft%2==1)
                cout << " " << temp << a[i] << temp << "*" << endl;
            isleft++;
        }
    }
    for (int i = 0; i < maxn + 2; i++)
    {
        cout << "*";
    }
    return 0;
}
