// SIMPLE Buffer Overflow vuln
// compile: gcc -g -z execstack -fno-stack-protector -no-pie vuln2.c -o vuln2
#include <stdio.h>
#include <string.h>
int main (int argc, char* argv[])
{
	char buf[135];
	strcpy(buf,argv[1]);
	return 0;
}
