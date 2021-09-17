#include<stdio.h>
int main()
{
	unsigned int n=0;
	scanf("%d",&n);
	//binary(n);
	n = ~n;
	printf("%d",n);
	//binary(n);
	
	return 0;
}
void binary(unsigned int n)
{
	unsigned int mask=64;/*1010 1's = 0101   0101
												1
											  0 1 1 0 
											  0 1 0 1
											 1 0  1  1 */
	while(mask)
	{
		//printf("%ld\n",mask);
		printf("%d",(n&mask)?1:0);
		mask=mask>>1;
	}
	printf("\n");
}
