#include<iostream>

using namespace std;

int n, v[800], win[800];

void dfs(int x){
    if(x>=1<<n){
        return;
    }
    else{
        dfs(2 * x);
        dfs(2 * x + 1);
        int lchild = v[2 * x], rchild = v[2 * x + 1];
        if(lchild>rchild){
            win[x] = win[2*x];
            v[x] = lchild;
        }
        else{
            win[x] = win[2*x+1];
            v[x] = rchild;
        }
    }
}

int main()
{
    
    cin >> n;
    for (int i = 0; i < 1<<n; i++)
    {
        cin >> v[i + (1 << n)];
        win[i + (1 << n)] = i+1;
    }
    dfs(1);
    if(v[2] > v[3])
        cout << win[3];
    else
        cout << win[2];
    return 0;
}
