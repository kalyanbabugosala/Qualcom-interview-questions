#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	//8  - 1000
	//7  - 0111
	 //&  - 0000
	 if(n==0)
	 {
	 	printf("NO");
	 }
	 else
	 {
		((n & n-1))==0 ? printf("YES") : printf("NO") ;
     }
	return 0;
}
