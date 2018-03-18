#include <stdio.h>
int main()
{
  int i,a;
  long fact;
  printf("enter number:_");
  scanf("%d",&a);
  if (a==0)
	printf("factorial of 0 is 0.");
  else
    fact=1;
    for (i=1;i<=a;)
     {
       
       fact=fact*i;
       
       i=i+1;
       printf("%li\n",fact);
     }
  return 0;
}
