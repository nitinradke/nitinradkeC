#include<stdio.h>

struct graph
{
	int neigh[3400];
	int j;
}s[34000];
	

int main()
{
	int a,b,n,node;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		s[i].j=0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		s[a].neigh[s[a].j]=b;
      	s[b].neigh[s[b].j]=a;
		s[a].j+=1;
      	s[b].j+=1;
	}
	scanf("%d",&node);
	for(int i=0;i<s[node].j;i++)
	{	
		printf("%d\n" ,s[node].neigh[i]);
	}
	
	return 0;
}
