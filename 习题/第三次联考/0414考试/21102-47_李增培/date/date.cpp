#include<bits/stdc++.h>
using namespace std;
char d1[10],d2[10];
int ans;
int a,b;
void pand();
int sum;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	//60%�����ݣ���date1=date2����ô�ж�date1�� 
	cin>>d1>>d2;
	for(int i=0;i<8;i++){ 
		if(d1[i]==d2[i]) ans=1;
		else{ans=0;break;}
	}
	if(ans==1){
		pand();  
		return 0;
}
	a=(d1[0]-'0')*1000+(d1[1]-'0')*100+(d1[2]-'0')*10+(d1[3]-'0');//���ĵĻ��Ϳ������ݻ���֮���Ƿ�������Ծ��ж�d1��d2֮�������м�������֮����Ե� 
	b=(d2[0]-'0')*1000+(d2[1]-'0')*100+(d2[2]-'0')*10+(d2[3]-'0');
	for(int i=a;i<=b;i++){
		if(i%10<2&&i%1000<400){
			if(i%10==0&&i%100>9){sum++;
			}
			else{
				if(i%100-i%10<4){
					sum++;
				}
			}
			}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

void pand(){
	for(int i=0;i<8;i++){
		if(d1[i]!=d1[7-i]) return;
	}cout<<1;
}
