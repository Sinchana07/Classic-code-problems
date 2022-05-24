//Day2 problem1
#include <stdio.h>
int main()
{
  int n,a[100],i,j,temp;
  printf("\nEnter no of ballons\n");
  scanf("%d",&n);
  printf("\nEnter balloon size\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
       if(a[j]>a[j+1])
       {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
    }
  }
printf("%d\t%d",a[n-2],a[n-1]);
return 0;
}

   
  
