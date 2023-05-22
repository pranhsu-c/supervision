#include<stdio.h>

main()
{
	FILE *p;
	char data[10000];
	p = fopen("pranshu-c.txt","w");
	
	if(p=='\0')
	{
		printf("error to open file");
		
	}
	else
	{
		printf("enter the changes you want in file");
		gets(data);
		fputs(data,p);
		printf("data entered succesfully");
		fclose(p);
	}
}
