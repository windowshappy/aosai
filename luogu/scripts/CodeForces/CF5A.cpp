#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, bool> peo;

    string a;
    int ppp = 0, ans = 0;
    while (getline(cin, a))
    {
        if (a[0] == '+')
        {
            a.erase(0, 1);
            peo[a] = true;
            ppp++;
        }
        else if(a[0] == '-'){
            a.erase(0, 1);
            peo[a] = false;
            ppp--;
        }
        else{
            int temp = a.find(':');
            string name = a.substr(0, temp);
            string message = a.substr(temp + 1, a.size()-1);
            ans += message.size() * (ppp);
        }
    }
    cout << ans;
    return 0;
}
