#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 1; i <= 60; i++)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 4)
        {
            cout << i << endl;
        }
    }
    cout << " " << endl;
    return 0;
}
