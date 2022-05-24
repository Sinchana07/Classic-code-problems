//DAy2 problem2
#include <stdio.h>
int main()
{
  int n,a[100],i,noele,j,temp;
  printf("\nEnter n");
  scanf("%d",&n);
  printf("\nEnter no  of elements\n");
  scanf("%d",&noele);
  printf("\nEnter array elements\n");
  for(i=0;i<noele;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
  {
    temp=a[0];
    for(j=0;j<noele;j++)
    {
      
      a[j]=a[j+1];
     }
    
    a[noele-1]=temp;
  }


for(i=0;i<noele;i++)
{
   printf("%d\t",a[i]);
}
return 0;
}

