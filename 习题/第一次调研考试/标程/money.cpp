#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  freopen("money.in","r",stdin);
  freopen("money.out","w",stdout); 
  int x;
  double y;
  cin>>x;
  if (x>0&&x<=150)
   y=x*0.4463;
  else if (x>150&&x<=400)
   y=(x-150)*0.4663+150*0.4463;
  else
   y=(x-400)*0.5663+250*0.4663+150*0.4463;
  printf("%0.1lf",y);
  return 0;
}
