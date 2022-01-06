#include<stdio.h>
#include<stdlib.h>

int main()
{
	char color[20];
	char noun[20];
	char celebrity[20];
			
			printf("Enter the color :");
			fgets(color,20,stdin);
				printf("Enter the noun :");
			    fgets(noun,20,stdin);
				printf("Enter the celebrity :");
			    fgets(celebrity,20,stdin);
			
	
	printf("Roses are %s",color);
	printf("bun are %s",noun);
	printf("I love %s",celebrity);

    return 0;
	}
