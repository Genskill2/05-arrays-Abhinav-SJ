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

int factors(int a[], int n)
{
}

int mode(int a[], int n)
{
   int c[10]={0,0,0,0,0,0,0,0,0,0};
   int i,j;
   for(i=0; i<n; i++)
   {
      c[a[i]]++;
   }
   int max = c[0];
   for(j=1; j<n; j++)
   {
     if(c[j] > max)
        max = c[j];
   }
   return j;
}
