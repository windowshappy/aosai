#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	char k,l,m,d;
	int a,b,c,e,yi,er,san,si,wu,liu,qi,ba,jiu,ri;
	scanf("%d%c%d%c%d%c%c",&a,&k,&b,&l,&c,&m,&d);
	e=a*100000000+b*100000+c;
	jiu=e/1000000000;
	ba=e%100000000/10000000;
	qi=e%10000000/1000000;
	liu=e%1000000/100000;
	wu=e%100000/10000;
	si=e%10000/1000;
	san=e%1000/100;
	er=e%100/10;
	yi=e%10;
	ri=jiu*1+ba*2+qi*3+liu*4+wu*5+si*6+san*7+er*8+yi*9;
	ri=ri%11;
	if((ri==0&&d=='0')||(ri==2&&d=='2')||(ri==1&&d=='1')||(ri==3&&d=='3')||(ri==4&&d=='4')||(ri==5&&d=='5')||(ri==6&&d=='6')||(ri==7&&d=='7')||(ri==8&&d=='8')||(ri==9&&d=='9')||(ri==10&&d=='X')){
		cout<<"Right";
		return 0;
	}
	else{
		if(ri!=10){
			cout<<a<<"-"<<b<<"-"<<c<<"-"<<ri;
		}
		else{
			cout<<a<<"-"<<b<<"-"<<c<<"-"<<'X';
		}
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
