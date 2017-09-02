#include <stdio.h>  
 int main ()  
 {  
 int a[100],i,n;  
 scanf(" %d ",&n);   
 for(i=0; i < n ; i++)  
	scanf( "%d",&a[i]);   
int l=0;
int r=n-1;
 while(l<r)
    {
          if(a[l] == -1) l++;
          if(a[r] == 1) r--;
          for(i=l;i<r;i++)
            {
              if(a[i]==1 && a[i+1] == -1)
                    {
                        a[i] = -1;
                        a[i+1] = 1;
                    }
                }
     }
 printf("%d",l+1);  
 return 0;  
} 
