#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*
给定一个四位整数， 请将该数各个位上数字反转得到一个新数。
新数也应满足整数的常见形式， 即除非给定的原数为零， 否则反转后
得到的新数的最高位数字不应为零， 例如输入-3800， 反转后得到的新数为-83。
输入:
输入共 1 行， 一个整数 N。
输出:
输出共 1 行， 一个整数， 表示反转后的新数。
样例输入:
样例 #1： 1234
样例 #2： -3800
样例输出：
样例 #1： 4321
样例 #2： -83
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

