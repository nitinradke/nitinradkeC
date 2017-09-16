#include<stdio.h>



struct student
{
	char name[100];
	int phy;
	int chem;
	int maths;
}s[1000];

void find_rank(int);



int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i].name);
		scanf("%d",&s[i].phy);
		scanf("%d",&s[i].chem);
		scanf("%d",&s[i].maths);
	}
	find_rank(n);
	return 0;
}


void find_rank(int n)
{
	struct student temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-1-i);j++)
		{
			if(s[j].phy>s[j+1].phy)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			else
			if(s[j].phy==s[j+1].phy)
			{
				if(s[j].chem > s[j+1].chem)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
				else
				if(s[j].chem==s[j+1].chem)
				{
					if(s[j].maths > s[j+1].maths)
					{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;
					}
					else
					if(s[j].maths==s[j+1].maths)
					{
						if(s[j].name[i] > s[j+1].name[i])
						{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;
						}
					}
				}
			}
		}
	}			
	for(int j=0;j<n;j++)
	{
		
		printf("%s	%d	%d	%d",s[j].name,s[j].phy,s[j].chem,s[j].maths);
		if(j!=(n-1))
		{
			printf("\n");
			
		}
	}
}	
