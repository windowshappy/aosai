#include <bits/stdc++.h>

using namespace std;

void print(string x)
{
    if(x=="0")
        cout << 0;
    else{
        bool flag = true;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        if (x[i] == '0' && flag)
            continue;
        cout << x[i];
        flag = 0;
    }
    }
    
}

bool isInt(string x)
{
    if (x.find('.') == -1)
    {
        if (x.find('/') == -1)
        {
            if (x.find('%') == -1)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool isPoint(string x)
{
    if (x.find('.') != -1)
    {
        if (x.find('/') == -1)
        {
            if (x.find('%') == -1)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool isChu(string x)
{
    if (x.find('.') == -1)
    {
        if (x.find('/') != -1)
        {
            if (x.find('%') == -1)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool isBai(string x)
{
    if (x.find('.') == -1)
    {
        if (x.find('/') == -1)
        {
            if (x.find('%') != -1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    string a;
    cin >> a;
    if(a=="0"){
        cout << 0;
        return 0;
    }
        
    if (isInt(a))
    {
        print(a);
    }
    if (isPoint(a))
    {
        string zheng = a, xiao = a;
        zheng.erase(a.find('.'));
        xiao.erase(0, a.find('.') + 1);
        if(xiao!="0")
        for (int i = 0; xiao[i] == '0'; i++)
        {
            if (xiao[0] == '0')
                xiao.erase(0, 1);
            else
                break;
        }

        print(zheng);
        cout << ".";
        print(xiao);
    }
    if (isChu(a))
    {
        string zheng = a, xiao = a;
        zheng.erase(a.find('/'));
        xiao.erase(0, a.find('/') + 1);
        print(zheng);
        cout << "/";
        print(xiao);
    }
    if(isBai(a)){
        string zheng = a;
        zheng.erase(a.find('%'));
        print(zheng);
        cout << "%";
    }

    return 0;
}
