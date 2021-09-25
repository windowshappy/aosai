#include <bits/stdc++.h>

using namespace std;

bool isNum(char a)
{
    return a >= '0' && a <= '9';
}
bool isPassword(string a)
{
    if (a.size() == 8)
    {
        if (isNum(a[0]) &&
            a[1] == '-' && isNum(a[2]) &&
            a[3] == '-' && isNum(a[4]) &&
            isNum(a[5]) && isNum(a[6]) &&
            isNum(a[7]))
        {
            return 1;
        }
    }
    else if (a.size() == 9)
    {
        if (isNum(a[0]) &&
            isNum(a[1]) && a[2] == '-' &&
            isNum(a[3]) && a[4] == '-' &&
            isNum(a[5]) && isNum(a[6]) &&
            isNum(a[7]) && isNum(a[8]))
        {
            return 1;
        }
    }
    return 0;
}

#define ip(a) isPassword(a)

int main()
{
    string a;
    bool flag = false;
    while (cin >> a)
    {
        if(a.size()<8)
            continue;
        if (a.size() == 8)
        {
            if (ip(a))
            {
                cout << a << endl;
                flag = true;
            }
        }
        else if (a.size() == 9)
        {
            if (ip(a))
            {
                cout << a << endl;
                flag = true;
            }
        }
        else
        {
            for (int i = 0; i<a.size(); i++)
            {
                bool iii = true;
                if(i>0)
                    iii = !isNum(a[i - 1]);
                if(isNum(a[i])&&a[i+1] == '-'&&iii){
                    if(ip(a.substr(i, i+8))){
                        cout << a.substr(i, i+8) << endl;
                        a[i]=a[i+1]=a[i+2]=a[i+3]=a[i+4]=a[i+5]=a[i+6]=a[i+7]=a[i+8] = '.';
                        
                        flag = true;
                    }
                }
                else if(isNum(a[i])&&isNum(a[i+1])&&a[i+2] == '-'&&iii){
                    if(ip(a.substr(i, i+9))){
                        cout << a.substr(i, i+9) << endl;
                        a[i]=a[i+1]=a[i+2]=a[i+3]=a[i+4]=a[i+5]=a[i+6]=a[i+7]=a[i+8] =a[i+9]= '.';
                        flag = true;
                    }
                }
            }
        }
    }
    if(!flag)
        cout << -1;
    return 0;
}
