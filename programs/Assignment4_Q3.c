/*
Write a program that replaces the occurence of a given character (say c)
in a primary string (say PS) with another string (say s).

Input:
The first line contains the primary string (PS)
The next line contains a character (c)
The next line contains a string (s)

Output:
Print the string PS with every occurence of c replaced by s.

NOTE:
- There are no whitespaces in PS or s. 
- Maximum length of PS is 100.
- Maximum length of s is 10.

coder - Nitin radke
*/


#include<stdio.h>
#include<string.h>
int find_pos(char *,int,char,int);
void myreplace(char * ,char *,char,int);
int main()
{
	char arr[100],arr1[10];
	char e;
	scanf("%s",arr);
	scanf(" %c",&e);
	scanf("%s",arr1);
	myreplace(arr,arr1,e,0);	
	return 0;
}

void myreplace(char *arr,char *arr1,char c,int start)
{
	int occ,i,arr_n,arr1_n;
	arr1_n=strlen(arr1);
	arr_n=strlen(arr);
	
	occ=find_pos(arr,arr_n,c,start);
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
	myreplace(arr,arr1,c,start+occ+arr1_n);
}	
	

int find_pos(char *arr,int n,char c,int start)
{
	int i;
	for(i=start;i<n;i++)
	{
		if(arr[i]==c)
			return i;
	}
	return -1;
}

