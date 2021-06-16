#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  int t = 0;
  cin>>a;
  stack<long long> number;
  for (size_t i = 0; i < a.size(); i++) {
    if(a[i]=='-'){
      int a = number.top(),b;
      number.pop();
      b = number.top();
      number.pop();
      b-=a;
      number.push(b);
    }
    else if(a[i] == '*'){
      int a = number.top(),b;
      number.pop();
      b = number.top();number.pop();
      b*=a;
      number.push(b);
    }
    else if(a[i] == '+'){
      int a = number.top(),b;
      number.pop();
      b = number.top();number.pop();
      b+=a;
      number.push(b);
    }
    else if(a[i] == '/'){
      int a = number.top(),b;
      number.pop();
      b = number.top();number.pop();
      b/=a;
      number.push(b);
    }
    else if(a[i]>='0'&&a[i]<='9'){
      t*=10;
      t+=a[i] - '0';
    }
    else if(a[i]=='.'){
      number.push(t);
      t=0;
    }
  }
  cout<<number.top();
  return 0;
}
