#include <bits/stdc++.h>

using namespace std;

/*
ins_back(x,y) ：将元素 y 插入到 x 后面；
ins_front(x,y) ：将元素 y 插入到 x 前面；
ask_back(x) ：询问 x 后面的元素；
ask_front(x) ：询问 x 前面的元素；
del(x)：从表中删除元素 x，不改变其他元素的先后顺序。
*/

class table {
private:
  int tot;

  struct node {
    int pre,nxt,key;
    node(int _k = 0,int _p = 0, int _n = 0){
      pre = _p;
      nxt = _n;
      key = _k;
    }
  } ;


public:
  node s[100010];
  int index[100010];
  table(){
    memset(index, 0, sizeof(index));
    s[0] = node();
    tot = 0;
  }

  void ins_back(int x, int y) {
    int now = index[x];
    s[++tot] = node(y, now, s[now].nxt);
    // 分别为元素、前驱、后继
    s[s[now].nxt].pre = tot;
    s[now].nxt = tot;
    index[y] = tot;
  }

  void ins_front(int x, int y) {
    int now = index[x];
    s[++tot] = node(y, s[now].pre ,now);
    // 分别为元素、前驱、后继
    s[s[now].pre].nxt = tot;
    s[now].pre = tot;
    index[y] = tot;
  }

  int ask_back(int x) {
    int now = index[x];
    return s[s[now].nxt].key;
  }

  int ask_front(int x) {
    int now = index[x];
    return s[s[now].pre].key;
  }

  void del(int x) {
    int now = index[x];
    int le = s[now].pre, rt = s[now].nxt;
    s[le].nxt = rt;
    s[rt].pre = le;
    index[x] = 0;
  }
  void print() {
    int now = s[0].nxt;
    while(now){
      cout<<s[now].key<<" ";
      now = s[now].nxt;
    }
  }

};

int main() {
  table t = table();
  int x,k,p,n,m;
  cin>>n;
  t.ins_back(0,1);
  for(int i=2;i<=n;i++){
    cin>>k>>p;
    p? t.ins_back(k,i) : t.ins_front(k,i);
  }
  cin>>m;
  for(int i=1;i<=m;i++){
    cin>>x;
    if(t.index[x]) t.del(x);
  }
  t.print();
  return 0;
}
