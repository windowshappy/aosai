#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int s1,s2,s3,s4,s5,s6,s7,s8,s9,x;
	char a='-';
	cin>>s1>>a>>s2>>s3>>s4>>a>>s5>>s6>>s7>>s8>>s9>>a>>x;
	if((s1*1+s2*2+s3*3+s4*4+s5*5+s6*6+s7*7+s8*8+s9*9)%11==x)
	{
		cout<<"Right";
	}
	if((s1*1+s2*2+s3*3+s4*4+s5*5+s6*6+s7*7+s8*8+s9*9)%11!=x)
	{
		if((s1*1+s2*2+s3*3+s4*4+s5*5+s6*6+s7*7+s8*8+s9*9)%11==10)
		{
			cout<<s1<<a<<s2<<s3<<s4<<a<<s5<<s6<<s7<<s8<<s9<<a<<"X";
		}
		if((s1*1+s2*2+s3*3+s4*4+s5*5+s6*6+s7*7+s8*8+s9*9)%11!=10)
		{
			cout<<s1<<a<<s2<<s3<<s4<<a<<s5<<s6<<s7<<s8<<s9<<a<<(s1*1+s2*2+s3*3+s4*4+s5*5+s6*6+s7*7+s8*8+s9*9)%11;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
