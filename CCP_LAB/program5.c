//program to store marks of 5 students in 3 subjects and print highest marks ineach subject
#include<stdio.h>
int main()
{
 int i, j, a[5][4],max;
 printf("\n Please Enter the details \n");
 for(i = 0; i < 5; i++)
 	 {
   		printf("enter roll no.");
   		scanf("%d",&a[i][0]);
   		printf("enter marks in sub 1:");
   		scanf("%d",&a[i][1]);
   		printf("enter marks in sub 2 :");
   		scanf("%d",&a[i][2]);
   		printf("enter marks in sub 3 :");
   		scanf("%d",&a[i][3]);
	}
printf("the entered details are:\n");
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
	printf("  %d",a[i][j]);
	printf("\n");
}
for (i=1;i<4;i++)
	{
		max=a[0][i];
		for (j = 1; j < 5; j++)
		{
			if(a[j][i]>max)
			max=a[j][i];
		}
		printf("max marks in sub %d is  %d\n",i ,max);
	}
}
