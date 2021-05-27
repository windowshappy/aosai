#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	fropen("date.in","r",stdin);
	fropen("date.out","w",stdout);
	
	
	
	fclose(stdin);fclose(stdout);
	return 0;
}
