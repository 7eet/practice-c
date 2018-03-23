#include <stdio.h>
int factorial(int num);
int main()
{
  int a;
  int fa;
  printf("enter number: ");
  scanf("%d",&a);
  
  if (a==0)
	printf("factorial of 0 is 0.");
  else
     if (a<0)
        printf("Sorry! factorial of negative is not possible");
     else
        fa=factorial(a);
        printf("Factorial is %d ",fa); 	
  return 0;
}
int factorial(int num) 
{
  int i;
  int fact;   
  fact=1;
  for (i=1;i<num+1;)
    {
      fact=fact*i;
      i=i+1;
      
    }
  return fact;
}
