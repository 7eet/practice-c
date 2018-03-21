#include <stdio.h>
int main()
{
  int a,i,j;
  int fb;
  printf("Enter how elements of fibonaaci series you want:_");
  scanf("%d",&a);
  fb=1;
  while (fb<=a)
    {
      fb=fb+fb; 
      continue;
      printf("%d\n",fb);
    }  
    
  return 0;  
}
