#include<stdio.h>

main()
{
	FILE *p;
	char data[10000];
	p = fopen("pranshu-c.txt","r");
	
	if(p =='\0')
	{
		printf("error to open file");
		
	}
	else
	{
		while(fgets(data,100,p)!='\0')
		{
			printf("%s",data);
		}
		fclose(p);
	}
}
