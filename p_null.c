#include<stdio.h>
#include<stdlib.h>
void modify(int *a)
{
	*a=10;
	a=NULL;
}
int main()
{
	int x=5;
	int *p=&x; //assume p=0XFFFF
	printf("%p %u\n",p,x);
	modify(p);
	p=NULL;
	printf("%p %u\n",p,x);
	return 0;
}
