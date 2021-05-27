#include <iostream>

using namespace std;
int a[110][110];
int main() {

  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      char t;
      cin>>t;
      if(t=='*'){
        a[i][j] = -2222;
      }
      else{
        a[i][j] = 0;
      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(a[i][j] >= 0){
        if(a[i-1][j] == -2222){
          a[i][j]++;
        }
        if(a[i+1][j] == -2222){
          a[i][j]++;
        }
        if(a[i][j-1] == -2222){
          a[i][j]++;
        }
        if(a[i][j+1] == -2222){
          a[i][j]++;
        }
        if(a[i-1][j-1] == -2222){
          a[i][j]++;
        }
        if(a[i+1][j+1] == -2222){
          a[i][j]++;
        }
        if(a[i-1][j+1] == -2222){
          a[i][j]++;
        }
        if(a[i+1][j-1] == -2222){
          a[i][j]++;
        }

      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(a[i][j]==-2222){
        cout<<'*';
      }
      else{
        cout<<a[i][j];
      }
    }
    cout<<endl;
  }
  return 0;
}
