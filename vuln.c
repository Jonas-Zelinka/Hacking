#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[1])
{
	char buffer[512];

	if(argc == 1)
	{
               	printf("-FATAL- you don´t write anything!!\n");
		exit(0);
	}
	else
	{
	printf("--BUFFER--\nyou should overwrite me :) \n");
	printf("%s \n", argv[1]);
	strcpy(buffer,argv[1]);
	}
	return 0;
}
