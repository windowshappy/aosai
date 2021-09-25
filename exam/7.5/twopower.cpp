#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

string ans;
int n;
string power(int j)
{
    if (j == 1)
    {

        return "2(0)";
    }
    if (j == 2)
    {

        return "2";
    }
    if (j == 3)
    {

        return "2+2(0)";
    }
    if (j == 4)
    {

        return "2(2)";
    }
    if (j == 5)
    {

        return "2(2)+2(0)";
    }
    if (j == 6)
    {

        return "2(2)+2";
    }
    if (j == 7)
    {

        return "2(2)+2+2(0)";
    }
    if (j == 8)
    {

        return "2(2+2(0))";
    }
    if (j == 10)
    {

        return "2(2+2(0))+2";
    }
    string a = "";
    int t = 0, x = j;
    if (x % 2 != 0)
    {
        ans += "2(0)";
        x--;
    }
    for (int i=1; x!=0;i++)
    {
        int t = pow(2, i);
        if(x>t){
            x -= t;
            a = power(i)+"+" + a;
        }
    }
    return a;
}

int main()
{
    freopen("twopower.in", "r", stdin);
    freopen("twopower.out", "w", stdout);

    cin >> n;
    if (n % 2 != 0)
    {
        ans += "2(0)";
        n--;
    }
    // for (; n != 0;)
    // {
    //     // int t = 0;
    //     // for (; n % 2 == 0;)
    //     // {
    //     //     n /= 2;
    //     //     t++;
    //     // }
    //     //ans = ("2(")
    //     ans = power(n)+ "+" + ans;
    // }
    
    cout << power(n);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
