/*# Python3 program to find all subsets
# by backtracking.

# In the array A at every step we have two
# choices for each element either we can
# ignore the element or we can include the
# element in our subset
def subsetsUtil(A, subset, index):
	print(*subset)
	for i in range(index, len(A)):
		
		# include the A[i] in subset.
		subset.append(A[i])
		
		# move onto the next element.
		subsetsUtil(A, subset, i + 1)
		
		# exclude the A[i] from subset and
		# triggers backtracking.
		subset.pop(-1)
	return

# below function returns the subsets of vector A.
def subsets(A):
	global res
	subset = []
	
	# keeps track of current element in vector A
	index = 0
	subsetsUtil(A, subset, index)
	
# Driver Code

# find the subsets of below vector.
array = [1, 2, 3]

# res will store all subsets.
# O(2 ^ (number of elements inside array))
# because at every step we have two choices
# either include or ignore.
subsets(array)

# This code is contributed by SHUBHAMSINGH8410
*/

#include<stdio.h>
#include<conio.h>
#define max 100
int res;
void subsetUtil(int A[],int subset[],int index)
{
	int i,j,len;
	len=sizeof(A)/sizeof(A[0]);
	for(i=0;i<=len;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	/*for(j=len;j>=index;j--)
	{
		subset[j] = A[j];
		subsetUtil(A,subset,i+1);
		subset[len--];
	}*/
	
}
void subsets(int A[])
{
	static int index=0;
	int subset[max];
	subsetUtil(A,subset,index);
}

int main()
{
	int array[]={7,8,9};
	
	subsets(array);
	
	return 0;
}
