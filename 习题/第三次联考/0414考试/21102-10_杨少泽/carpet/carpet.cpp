#include<iostream>
#include<cstdio>

using namespace std;

int n;
int a[10050][5];
int x,y;
int f;
bool l=false;

int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
    	
    	a[i][3]+=a[i][1];
    	a[i][4]+=a[i][2];
    	
    }
    
    cin>>x>>y;
    
    for(int i=n;i>=1;i--)
    {
    	if(a[i][3]>=x&&a[i][4]>=y&&a[i][1]<=x&&a[i][2]<=y)
    	{
    		f=i;
    		l=true;
    		
    		break;
    	}
    }
    
    if(l==true)
    {
    	cout<<f;
    }else{
    	cout<<"-1";
    }
    
	fclose(stdin);
	fclose(stdout);

	return 0;
}
