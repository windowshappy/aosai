#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,x,y;
	int a[10100],b[10100],g[10100],k[10100];
	int i;
	bool f=0; //�ж��Ƿ��ҵ�
	
	cin>>n;
	for(i=1;i<=n;i++) //ע��g,kΪ����
	 scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	cin>>x>>y;
	
	for(i=n;i>=1;i--)//����������ҵ�������ĵ�̺
	 if(a[i]<=x&&a[i]+g[i]>=x //�����긲��
		&&b[i]<=y&&b[i]+k[i]>=y) //�����긲��
	{
		cout<<i; //������
		f=1;
		break;
	}
	if(!f) cout<<-1; //δ�ҵ������-1
	
	fclose(stdin); fclose(stdout);
	return 0;
}
