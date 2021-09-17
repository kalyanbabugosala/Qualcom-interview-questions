#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	scanf("%d",&i);
	binary(i);
	printf("%d",countSetBits(i));
	return 0;
} 
int countSetBits(int n)
{
	int count=0;
	while(n)
	{
		n &= (n-1);
		count++;
	}
	return count;
}
void binary(unsigned int n)
{
	unsigned int mask=0x8000;
	while(mask)
	{
		printf("%d",(n&mask)?1:0);
		mask=mask>>1;
	}
	printf("\n");
}
