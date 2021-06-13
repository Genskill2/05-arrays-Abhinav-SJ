/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[], int n)
{
   int max = a[0];
   for(int i=1; i<n; i++)
   {
      if(a[i]>max)
         max=a[i];
   }
   return max;
}
