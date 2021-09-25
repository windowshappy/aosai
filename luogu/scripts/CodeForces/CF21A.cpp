#include <bits/stdc++.h>


using namespace std;

bool isRight(string a, int maxlength = 16)
{
    if (a.size() > maxlength||a[0] == '.')
        return false;
    for (size_t i = 0; i < a.length(); i++)
    {
        if ((maxlength != 32 &&!(isalnum(a[i]) || a[i] == '_')) || (maxlength == 32 && !(isalnum(a[i]) || a[i] == '_' || a[i] == '.')))
        {
            return false;
        }
    }

    return true;
}

bool isResource(string a){
    int t = a.find("/", 0);
    if(isRight(a.substr(0, t == -1? INT_MAX:t))){
        
    }
    else{
        return false;
    }
}

int main()
{
    string a;
    cin >> a;
    int ttt = a.find('/');
    if (ttt = -1)
        ttt = INT_MAX;
    if (isRight(a.substr(0, a.find('@'))) && isRight(a.substr(a.find('@') + 1, ttt), 32))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
