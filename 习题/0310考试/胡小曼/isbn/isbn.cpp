#include<iostream>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a1,a2,a3,s,z,x1,x2,x3,y1,y2,y3,y4,y5;
	char n,o;
	cin>>a1>>n>>a2>>n>>a3>>n>>s;
	 x1=a2/100;x2=a2/10%10;x3=a2%100%10;
	 y1=a3/10000;y2=a3/1000%10;
	 y3=a3/100%10;y4=a3/10%10;y5=a3%10;
	 z=(a1*1+x1*2+x2*3+x3*4+y1*5+y2*6+y3*7+y4*8+y5*9)%11;
	if(z==10&&s!=z) cout<<a1<<n<<a2<<n<<a3<<n<<'X'; 
	if(s==z)
	 cout<<"Right";
	if(s!=z)
	 cout<<a1<<n<<a2<<n<<a3<<n<<z;
	 fclose(stdin);
	 fclose(stdout);
	 return 0;
}
