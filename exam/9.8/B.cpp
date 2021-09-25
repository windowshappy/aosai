#include <iostream>

using namespace std;

#define LL long long


int num[200];
string a, b;
int n;
LL ans = 1;

int main()
{
    ios::sync_with_stdio(0);
    cin >> a >> n;
    for (register size_t i = 0; i < a.size(); i++)
    {
        num[(int)a[i]]++;
    }
    for (register int i = 0; i < n; i++)
    {
        cin >> b;
        for (register size_t j = 0; j < b.size(); j++)
        {
            for (register int x = 0; x < num[(int)b[j]]; x++)
            {
                ans *= (LL)b.size();
                ans %= 1000000007;
            }
        }
    }
    cout << ans;
    return 0;
}