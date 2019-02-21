#include <stdio.h>
#include <stdlib.h>
int main()
{
      int a[4]={1,2,3,4};
      int n=4,i,j,t;
      for(i=0;i<n;i++)
      { 
            for(j=0;j<=i;j++)
            { 
            if(a[i]<a[j])
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
                  }
             }
      }
      printf("\nAfter Sorting in Ascending Order: \n");
      for(i=0;i<n;i++)
      printf("\n%d",a[i]);
      return 0;
}
