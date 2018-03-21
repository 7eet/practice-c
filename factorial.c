#include <stdio.h>
int factorial(int num);
int main()
{
  int a;
  long facto;
  printf("enter number: ");
  scanf("%d",&a);
  if (a==0)
	printf("factorial of 0 is 0.");
  else
    if (a<0)
      printf("Sorry! factorial of negative is not possible");
    else
      facto=factorial(a);
      printf("Factorial of %d is %li .",a,facto); 	
  return 0;
}
int factorial(int num) 
{
  int i,a;
  long fact;   
  fact=1;
  for (i=1;i<=a;)
  {
    fact=fact*i;
    i=i+1;
    return fact;
  }
}
