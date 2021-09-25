#include <bits/stdc++.h>

using namespace std;

string key[30] = {"", "one", "two", "three", "four", "five", "six", "seven",
                  "eight", "nine", "ten", "elven", "twelve", "thirteen", "fourteen", "fifteen",
                  "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a", "both",
                  "another", "first", "second", "third"};
int num[30] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 0, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0,
               1, 4, 1, 1, 4, 9};

int n[10];

int main()
{
    int k = 0;
    string a;
    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        if(a[0]>='a'&&a[0]<='z'){
            for (int j = 1; j <= 26;j++){
                if(key[j]==a){
                    n[++k] = num[j];
                    break;
                }
            }
        }
    }
    if(k==0){
        cout << 0;
        return 0;
    }
    sort(n + 1, n + 1 + k);
    for (int i = 1; i <= k; i++)
    {
        if(i!=1&&n[i]<10)
            cout << 0;
        cout << n[i];
    }
    

    return 0;
}
