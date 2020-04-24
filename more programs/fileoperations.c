//C program to create a file and write data into file.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char data[200],c;
    FILE * ptr;
    ptr = fopen("file.txt", "w");
    if(ptr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
    
	printf("Enter contents to store in file : \n");
    fgets(data, 200, stdin);
    fputs(data, ptr);
    printf("File created and saved successfully. :) \n");
    fclose(ptr);
    
    ptr = fopen("file.txt", "r"); 
    if (ptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
    printf("The contents of the file are.  \n");
	c = fgetc(ptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(ptr); 
    } 
	fclose(ptr);

    return 0;
}
