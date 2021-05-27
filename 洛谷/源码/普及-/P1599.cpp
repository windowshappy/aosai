#include <bits/stdc++.h>

using namespace std;

struct qian {
  int index;
  int money;
  bool ish;
  qian(){index=0;money=0;ish = false;}
}q[100001];

void rrr() {
  int n,d[100001],t=0,index = 0, m=0, ttt=0;bool hhh = 0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>d[i];
  }
  for (int i = 0; i < n; i++) {
    m+=1;
    t+=d[i];
    if(t>=0&&hhh) {
      m+=(i-ttt)*2;
      hhh=0;
    }
    if(t<0&&!hhh){
      hhh=1;
      ttt=i;
    }
  }
  cout<<m;
}

void www() {
  int n,d[100001],t=0,index = 0, m=0, ttt=0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>d[i];
  }
  for (int i = 0; i < n; i++) {
    m+=i+1;
    if (d[i]>0) {
      t+=d[i];
      if(index>0){
        if(q[ttt].money<=t){
          t-=q[ttt].money;
          q[ttt].ish = true;
          m+=i-q[ttt].index+1;
        }
        for(int i=ttt+1;i<index;i++){
          if(q[i].ish) {
            ttt++;
            continue;
          }
          if(q[i].money<=t){
            t-=q[i].money;
            q[i].ish = true;
          }
        }

      }
    } else if (d[i]<0) {
      if (t>=d[i]) {
        t+=d[i];
      } else {
        q[index].index = i;
        q[index].money = d[i];
        index++;
      }
    }
  }
  cout<<m;
}

int main() {
  rrr();
  return 0;
}
