#include <bits/stdc++.h>

using namespace std;

struct s {
  string name;
  int Chinese,math,English,mask;
} p[1024];

bool differential(int a,int b, int c){
  if(abs(a-b)<=c) return 1;
  return 0;
}

int main() {
  int n;
  cin>>n;
  string name;
  int Chinese,math,English;
  for (int i = 1; i <= n; i++) {
    cin>>name>>Chinese>>math>>English;
    p[i].name = name;
    p[i].Chinese = Chinese;
    p[i].math = math;
    p[i].English = English;
    p[i].mask = Chinese+math+English;
  }

  for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
      if(differential(p[i].Chinese, p[j].Chinese, 5)){
        if(differential(p[i].math, p[j].math, 5)){
          if(differential(p[i].English, p[j].English, 5)){
            if(differential(p[i].mask, p[j].mask, 10)){
              cout<<p[i].name<<" "<<p[j].name<<endl;
            }
          }
        }
      }
    }
  }
  return 0;
}
