#include <bits/stdc++.h>

using namespace std;

int main() {
  short p1,p2,p3;
  cin>>p1>>p2>>p3;
  string a;
  cin>>a;
  for(int i=0;i<a.size();i++){
    if(a[i]!='-'){
      cout<<a[i];
    }
    else if(i==0) cout<<'-';
    else if(a[i+1]=='-'||a[i-1]=='-') cout<<'-';
    else{
      if((isalpha(a[i-1])&&isdigit(a[i+1]))||(isalpha(a[i+1])&&isdigit(a[i-1]))){
        cout<<'-';
      }
      else if(a[i-1]>=a[i+1]){
        cout<<"-";
      }
      else if(a[i-1]+1==a[i+1]&&!((isalpha(a[i-1])&&isdigit(a[i+1]))||(isalpha(a[i+1])&&isdigit(a[i-1]))));
      else{
        if(p3==1){
          for(char j=a[i-1]+1;j<a[i+1];j++){
            for(int x=0;x<p2;x++){
              if(p1==2){
                if(j>='a'&&j<='z'){
                  cout<<(char)(j-32);
                }
                else{
                  cout<<j;
                }
              }
              else if(p1==1){
                cout<<j;
              }
              else{
                cout<<'*';
              }
            }
          }
        }
        else{
          for(char j=a[i+1]-1;j>a[i-1];j--){
            for(int x=0;x<p2;x++){
              if(p1==2){
                if(j>='a'&&j<='z'){
                  cout<<(char)(j-32);
                }
                else{
                  cout<<j;
                }
              }
              else if(p1==1){
                cout<<j;
              }
              else{
                cout<<'*';
              }
            }
          }
        }
      }

    }
  }
  return 0;
}
