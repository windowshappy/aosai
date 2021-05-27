#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int m,p,z=0,s=0,sum=0,b=0;
	for(int i=1;i<=12;i++){
		cin>>p;
		s=s+300-p;
		if(s<0){
			cout<<-i;
			return 0;
		}
		else{
			z=s/100-z;
			s=s%100;
		}
	}
	s=s+z*100*1.2;
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
