#include <bits/stdc++.h>

using namespace std;
map<int, int> num;
int main()
{

    set<int> ind;
    int n, a, maxn = -435, minn = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        num[a]++;
        ind.insert(a);
    }
    for (set<int>::iterator i = ind.begin(); i !=ind.end(); i++)
    {
        cout << *i << " " << num[*i] << endl;
    }


    return 0;
}

