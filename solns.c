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
   for(int i=1; i<n; i++)
   {
      if(a[i]<min)
         min=a[i];
   }
   return min;
}

float average(int a[], int n)
{
   float sum =0;
   for(int i=0; i<n; i++)
   {
      sum += a[i];
   }
   return sum/n;
}

int factors(int n, int a[])
{
   
}

int mode(int a[], int n)
{
   
   int i,j,k,max;
   max =a[0];
   for(i=1; i<n; i++)
   {
      if(a[i] > max)
         max = a[i];
   }
   int counts[max+1];
   for(i=0;i<=max;i++)
   {
      counts[i] = 0;
   }
   for(i=0;i<n;i++)
   {
      k = a[i];
      counts[k]++;
   }
   max = counts[0];
   for(j=1; j<n; j++)
   {
     if(counts[j] > max)
        max = c[j];
   }
   return j;
}
