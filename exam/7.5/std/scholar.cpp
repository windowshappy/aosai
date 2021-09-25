#include<iostream> 
#include<cstdio>
using namespace std;
int n,i,j,t,s[350][5];
int main()
{
cin>>n;
for(i=1;i<=n;i++)
{
cin>>s[i][1]>>s[i][2]>>s[i][3];
s[i][0]=i;
for(j=1;j<=3;j++)
s[i][4]+=s[i][j];
}
for(i=1;i<n;i++)
{
for(j=i+1;j<=n;j++)
if(s[i][4]<s[j][4]||s[i][4]==s[j][4]&&s[i][1]<s[j][1]||s[i][4]==s[j][4]&&s[i][1]==s[j][1]&&s[i][0]>s[j][0])
{
swap(s[i][1],s[j][1]);
swap(s[i][2],s[j][2]);
swap(s[i][3],s[j][3]);
}			
}
for(i=1;i<=5;i++)
{
cout<<s[i][0]<<" "<<s[i][4]<<endl;
}
return 0;
} 
