#include<bits/stdc++.h>

using namespace std;

struct apple
{
    int x, y;
} tao[5001];

bool cmp(apple a, apple b){
    return a.y < b.y;
}

int main(){
    int n, s, a, b, t = 0;
    cin >> n >> s >> a >> b;
    for(int i=0;i<n;i++)
    {
        cin >> tao[i].x>>tao[i].y;
    }
    sort(tao, tao + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if(tao[i].x<=a+b&&tao[i].y<=s)
        {
            t++;
            s -= tao[i].y;
        }
    }
    cout << t;
    return 0;
}