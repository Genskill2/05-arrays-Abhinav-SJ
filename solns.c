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

int min(int a[], int n)
{
   int min =a[0];
   for(i=1;i<n;i++)
   {
      if(a[i]<min)
         min=a[i];
   }
   return min;
}

float average(int a[], int n)
{
}

int factors(int a[], int n)
{
}

int mode(int a[], int n)
{
   
}
