// SIMPLE Buffer Overflow vuln
// echo 0 > /proc/sys/kernel/randomize_va_space 
// this command set the ALSR off...
// compile: gcc -g -z execstack -fno-stack-protector -no-pie vuln2.c -o vuln2
#include <stdio.h>
#include <string.h>
int main (int argc, char* argv[])
{
	char buf[135];
	strcpy(buf,argv[1]);
	return 0;
}
