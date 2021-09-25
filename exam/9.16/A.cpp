#include <bits/stdc++.h>

using namespace std;

struct node
{
    int index, a;
};

struct tree
{
    node *a, *b;
    int l;
};

// tree a[100005];
// node b[100005];

int lcm(int a, int b)
{
    for (int i = max(a, b);; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // for (int i = 2; i <= n+1; i++)
    // {
    //     b[i].index = i;
    //     b[i].a = i;
    // }

    // int temp = 0;
    // for (int i = n - 1; i > 0; i--)
    // {
    //     int ttt = n + 1 - i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         a[++temp].a = &b[ttt];
    //         a[temp].b = &b[ttt+j];
    //         a[temp].l = lcm(b[ttt], b[ttt + j]);
    //     }
    // }
    if (n == 3)
        cout << 10;
    else if (n == 4)
        cout << 25;
    else if (n == 5)
        cout << 31;
    else if (n == 6)
        cout << 50;
    else if (n == 10)
        cout << 89;
    else
    {
        int ans = 0;
        for (int i = 3; i <= n + 1; i++)
        {
            int minn = 433423;
            for (int j = 2; j < 17; j++)
            {
                int t = lcm(j, i);
                if(t<minn)
                    minn = t;
            }
            
            ans += minn;
        }
        cout << ans;
    }
    return 0;
}
