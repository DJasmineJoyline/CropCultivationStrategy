
 




#include<stdio.h>
int main()
{
  int num,m,count=0;
  scanf("%d",&num);
  while(num>=30)
  {
      num=num-30;
      count++;
      scanf("%d",&m);
      while(m>0)
      {
          num=num*2;
          m--;
      }
      
      
  }
  printf("%d",count);
	
	
	return 0;
}