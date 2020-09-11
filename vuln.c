// SIMPLE Buffer Overflow vuln
// echo 0 > /proc/sys/kernel/randomize_va_space 
// this command set the ALSR off...
// compile: gcc -g -z execstack -fno-stack-protector -no-pie vuln2.c -o vuln2
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
