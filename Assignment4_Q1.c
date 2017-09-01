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

