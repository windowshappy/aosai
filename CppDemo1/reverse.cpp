#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*
����һ����λ������ �뽫��������λ�����ַ�ת�õ�һ��������
����ҲӦ���������ĳ�����ʽ�� �����Ǹ�����ԭ��Ϊ�㣬 ����ת��
�õ������������λ���ֲ�ӦΪ�㣬 ��������-3800�� ��ת��õ�������Ϊ-83��
����:
���빲 1 �У� һ������ N��
���:
����� 1 �У� һ�������� ��ʾ��ת���������
��������:
���� #1�� 1234
���� #2�� -3800
���������
���� #1�� 4321
���� #2�� -83
*/

int main(){
	freopen("reverse.in", "r", stdin);
	freopen("reverse.out", "w", stdout);
	int a,b, c,d,e,f;
	scanf("%d", &a);
	c = a/1000;
	d = a/100%10;
	e = (a-c*1000-d*100)/10;
	f = (a-c*1000-d*100 - e*10);
	b = c+d*10+e*100+f*1000;
	cout<<b; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}

