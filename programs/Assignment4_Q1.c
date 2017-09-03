/*
Given two arrays of integers output the smallest number in the
first array not present in the second one.

Input Specification: 
The first line contains the size N1 of the first array.
Next line give the contents of the first array.
Next line contains the size N2 of the second array.
Next line give the contents of the second array.

Output Format:
Output must be a single number which is the smallest number occurring
in the first array that does not occur in the second. In case there is
no such number, output NO.

Variable Constraints:
The sizes of the arrays are smaller than 20.
Each array entry is an integer which fits an int data type.

Example:
Input:
3
2 3 4
4
1 3 5 7

Output: 2

Input
1
1
2
1 2
Output: NO

*/












#include<stdio.h>
int infinity;
int is_present(int ,int *,int);
int main()
{
  	int m,n,a[1000],b[1000],i,min=10000000,flag=0;
    scanf("%d",&m);
  	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
		  	scanf("%d",&b[i]);
		  	
		  	
  	for(i=0;i<m;i++)
    { 
	  
      if(is_present(a[i],b,n))
        {
			flag=1;
			if(a[i]<min)
				min=a[i];
		}
	  else
		continue;
	}
    if(flag)
    {
		printf("%d",min);
	}
	else
		printf("NO");
  return 0;
}

int is_present(int e ,int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(e!=a[i])
			continue;
		else
			return 0;
	}
	return 1;
}		

