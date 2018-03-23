#include <stdio.h>
int checkprime(int num);
int main()
{
  int a;
  char pn;
  printf("enter number:");
  scanf("%d",&a);
  pn=checkprime(a);
  printf("%d",pn);
  

}
int checkprime(int num)
{
  if (num<=0)
    printf("it isn't prime number\n");
    
  else
    if ((num%2==0) || (num%3==0) || (num%5==0) || (num%7==0)) 
       printf("it is isn't\n");
       
    else
       printf("it is prime number\n");
       return 0;

}

