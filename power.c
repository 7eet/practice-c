#include <stdio.h>
int power(int a,int b);
int main()
{
 int f,s;
 long pow;
 printf("enter base:");
 scanf("%d",&f);
 printf("rasied to power: ");
 scanf("%d",&s);
 pow=power(f,s);
 printf("%li",pow);
 return 0;
}
int power(int a,int b)
{

 long po;
 po=1;
 while (b>0)
  {
   po=po*a;
   b=b-1;
   continue;
  }
 return po;
} 
