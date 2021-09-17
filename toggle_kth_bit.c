#include<stdio.h>
int main()
{
	unsigned int n;
	int toggle,k;
	scanf("%u %d",&n, &k); //1010  1
	//printf("%u %d",n,k);
	toggle = 1 << k;       //1011  
	n=n^toggle;
	printf("%d",n);
	return 0;
}
