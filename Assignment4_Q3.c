#include<stdio.h>
#include<string.h>
int find_pos(char *,int,char);
void myreplace(char * ,char *,char c);
int main()
{
	char arr[100],arr1[10];
	char e;
	scanf("%s",arr);
	scanf(" %c",&e);
	scanf("%s",arr1);
	myreplace(arr,arr1,e);	
	return 0;
}

void myreplace(char *arr,char *arr1,char c)
{
	int occ,i,arr_n,arr1_n;
	arr1_n=strlen(arr1);
	arr_n=strlen(arr);
	
	occ=find_pos(arr,arr_n,c);
	if(occ==-1)
	{
		printf("%s",arr);
		return;
	}
	for(i=arr_n;i>occ;i--)
	{
		arr[(i-1)+(arr1_n-1)]=arr[i-1];	
	}
	int s=0;
	for(i=occ;i<arr1_n+occ;i++)
	{
		
		arr[i]=arr1[s++];
	}
	myreplace(arr,arr1,c);
}	
	

int find_pos(char *arr,int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==c)
			return i;
	}
	return -1;
}

