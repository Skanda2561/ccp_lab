//program to find average of n numbers
#include <stdio.h>
int main()
{
int marks[10],i,n,sum=0,average;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter %d values\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
sum=sum+marks[i];
}
average=sum/n;
printf("Averge mark= %d\n",average);
}
