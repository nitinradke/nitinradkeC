/*
 * logic is simple we want ants to move better is to cut the rod
 * their are 3 conditions 
 * 1 when all ants move left
 * 2 when all ants move right
 * 3 when their is collision.
 * Now whenever we have collision their directions excahnges an no aunt fall in this condition,but in other 2 cases if we found left
 * going ant at left corner or right moving ant at right corner they fall
 * So we cut the rod only in thsi two conditions that is by cutting left end and right end
 * Now last ant remaning will ony stand on one length rod(left==right) and it will fall in next iteration either right or left  
 * now left no longer remains smaller than right actully left goes equals left this is indication to stop
 * now for answer simple array starts from 0 but position given in que from 1
 * so ans left+1  

coder Nitin radke
*/



#include <stdio.h>  
 int main ()  
 {  
 int a[1002],i,n;  
 scanf(" %d ",&n);   
 for(i=0; i < n ; i++)  
	scanf( "%d",&a[i]);   
int left=0;
int right=n-1;
 while(left<right)
    {
          if(a[left] == -1) 
          {
			left++;
			}
		
          if(a[right] == 1)
          {
			   right--;
		   }
          for(i=left;i<right;i++)
            {
              if(a[i]==1 && a[i+1] == -1)
                    {
                        a[i] = -1;
                        a[i+1] = 1;
                    }
                }
     }
 printf("%d",left+1);  
 return 0;  
} 
