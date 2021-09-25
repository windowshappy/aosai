#include<bits/stdc++.h>

using namespace std;

bool have[100];

int main()
{
    int n;
    string c;
    cin >> n>>c;
    for (int i = 0; i < n; i++)
    {
        c[i] = toupper(c[i]);
        have[int(c[i])] = 1;
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if(!have[int(i)]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
