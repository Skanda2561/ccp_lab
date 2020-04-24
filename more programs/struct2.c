#include <stdio.h>
struct student
{
    char    name[50],sec, dept[20];
    int     rollno , totalmarks ;
    float   fees;

}s1,s2;

 
int main()
{
	printf("Enter the details of the students.\n");
	printf("\nStudent 1 :\n");
    printf("Name ?:");          
	gets(s1.name);
	printf("Department ?:");          
	gets(s1.dept);
	printf("Section ?:");          
	gets(s1.sec);
    printf("Roll Number ?:");            
	scanf("%d",&s1.rollno);
    printf("Fees ?:");        
	scanf("%f", &s1.fees);
	printf("Total Marks ?:");            
	scanf("%d",&s1.totalmarks);
	
	
    printf("\nStudent 2 :\n");
    printf("Name ?:");          
	gets(s2.name);
	printf("Department ?:");          
	gets(s2.dept);
	printf("Section ?:");          
	gets(s2.sec);
    printf("Roll Number ?:");            
	scanf("%d",&s2.rollno);
    printf("Fees ?:");        
	scanf("%f", &s2.fees);
	printf("Total Marks ?:");            
	scanf("%d",&s2.totalmarks);
	printf("The details of the student with more marks are :\n");
	if(s1.totalmarks >s2.totalmarks)
		{
			printf("\nStudent details :\n");
            printf("Name : %s \n"   ,s1.name);
    		printf("Department : %s \n"   ,s1.dept);
    		printf("Section : %s \n"   ,s1.sec);
    		printf("Roll Number : %d\n"     ,s1.rollno);
    		printf("Fees : %f\n",s1.fees);
    		printf("Total Marks : %d\n"     ,s1.totalmarks);
    	}
	else
		{
			printf("\nStudent details :\n");
            printf("Name : %s \n"   ,s2.name);
    		printf("Department : %s \n"   ,s2.dept);
    		printf("Section : %s \n"   ,s2.sec);
    		printf("Roll Number : %d\n"     ,s2.rollno);
    		printf("Fees : %f\n",s2.fees);
    		printf("Total Marks : %d\n"     ,s2.totalmarks);
    	}
	return 0;
}

