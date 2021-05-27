#include<iostream>
#include<cstdio>
int b[100];
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	string a;
	cin>>a;
	b[0]=a[0]-48;
	b[2]=a[2]-48;
	b[3]=a[3]-48;
	b[4]=a[4]-48;
	b[6]=a[6]-48;
	b[7]=a[7]-48;
	b[8]=a[8]-48;
	b[9]=a[9]-48;
	b[10]=a[10]-48;
	if(a[12]==120)b[12]=10;
	else b[12]=a[12]-48;
	if((b[0]*1+b[2]*2+b[3]*3+b[4]*4+b[6]*5+b[7]*6+b[8]*7+b[9]*8+b[10]*9)%11==b[12])
	{
		cout<<"Right";
	}
	else
	{
		if((b[0]*1+b[2]*2+b[3]*3+b[4]*4+b[6]*5+b[7]*6+b[8]*7+b[9]*8+b[10]*9)%11==10){
			cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<"x";
		}
		else{
			cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<(b[0]*1+b[2]*2+b[3]*3+b[4]*4+b[6]*5+b[7]*6+b[8]*7+b[9]*8+b[10]*9)%11;
		}
	}
	
	fclose(stdin);fclose(stdout);
	return 0;
}
