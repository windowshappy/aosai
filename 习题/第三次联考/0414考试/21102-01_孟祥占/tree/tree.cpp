#include<iostream>
#include<cstdio>
using namespace std;

int l,s,e;
int i;
int ans=0;
bool a[10100];

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	cin>>l;

	cin>>s>>e; //������
	for(i=s;i<=e;i++)
	a[i]=1;

	//�������ظ��Ĵ�������ú�������
	cin>>s>>e;
	for(i=s;i<=e;i++)
	a[i]=1;

	for(i=0;i<=l;i++)//ע���Ǵ�0��ʼ
	 if(a[i]==0)
	  ++ans;
	cout<<ans;
	fclose(stdin); fclose(stdout);
	return 0;
}
