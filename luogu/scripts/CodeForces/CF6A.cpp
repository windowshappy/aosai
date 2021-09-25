#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a+b>c&&a+c>b&&b+c>a)||
        (a+b>d&&a+d>b&&b+d>a)||
        (d+b>c&&d+c>b&&b+c>d)||
        (a+d>c&&a+c>d&&d+c>a))
        cout << "TRIANGLE";
    else if((a+b>=c&&a+c>=b&&b+c>=a)||
        (a+b>=d&&a+d>=b&&b+d>=a)||
        (d+b>=c&&d+c>=b&&b+c>=d)||
        (a+d>=c&&a+c>=d&&d+c>=a))
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}


/*
a b c
a b d
b c d
a c d
*/