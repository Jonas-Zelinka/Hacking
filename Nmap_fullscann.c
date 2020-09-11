#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Network scanner tool for script scanning with NMAP
void help();
void ending();
void choice()
{

	system("clear");

	printf("\n\n\n- - - - - - - - - - - - - - - - - - -\n");
	printf("- - - 	choose a script type 	- - -\n");
        printf("- - - - - - - - - - - - - - - - - - -\n\n");
        printf("	- - - - - - - - - - - - - 	\n");
	printf("	|	vuln		|	\n");
	printf("	|	default		|	\n");
	printf("	|	auth		|	\n");
	printf("	|	broadcast	|	\n");
	printf("	|	brute		|	\n");
	printf("	|	discovery	|	\n");
	printf("	|	dos		|	\n");
	printf("	|	exploit		|	\n");
	printf("	|	external	|	\n");
	printf("	|	fuzzer		|	\n");
	printf("	|	intrusive	|	\n");
	printf("	|	malware		|	\n");
	printf("	|	safe		|	\n");
	printf("	|	version		|	\n");
        printf("        - - - - - - - - - - - - - 	\n");
	printf("\n Type down your script type here\n");

	fflush(stdin);
	char choose1[50];
	scanf("%99s", &choose1); 	// NMAP scripts
//FATAL written start

while 	((strcmp(choose1,"vuln")!=0)&&
	(strcmp(choose1,"default")!=0)&&
	(strcmp(choose1,"exit")!=0)&&
	(strcmp(choose1,"auth")!=0)&&
        (strcmp(choose1,"broadcast")!=0)&&
        (strcmp(choose1,"brute")!=0)&&
        (strcmp(choose1,"discovery")!=0)&&
        (strcmp(choose1,"dos")!=0)&&
        (strcmp(choose1,"exploit")!=0)&&
        (strcmp(choose1,"external")!=0)&&
        (strcmp(choose1,"fuzzer")!=0)&&
        (strcmp(choose1,"intrusive")!=0)&&
        (strcmp(choose1,"malware")!=0)&&
        (strcmp(choose1,"safe")!=0)&&
        (strcmp(choose1,"version")!=0))
	{
	printf("\nFATAL - - Nmap will not work with the ´%s´´\n",choose1);
	scanf("%99s", &choose1);
	}

//FATAL written end

        if (strcmp(choose1,"exit")==0){
		ending();}
	if (strcmp(choose1,"help")==0)
		help();
			printf("\n- - - - - - - - - - - - - - - - - - - - -\n");
			printf("- you choose %s \n",choose1);
                        printf("- - - - - - - - - - - - - - - - - - - - -");

			printf("\n\n now you have to choose the Ports \n\n");
				char choose2[50];
				scanf("%99s", &choose2);
					if (strcmp(choose2,"exit")==0)
						ending();
                        	printf("\n- - - - - - - - - - - - - - - - - - - - -\n");
				printf("- your ports are %s\n",choose2);
                        	printf("- - - - - - - - - - - - - - - - - - - - -\n");

				printf("\n now you have to set the Target IP Adress \n");
				char choose3[50];
				scanf("%99s", &choose3);
                                        if (strcmp(choose3,"exit")==0)
                                                ending();
                        	printf("\n- - - - - - - - - - - - - - - - - - - - -\n");
				printf("- The Target IP Adress is = %s\n",choose3);
                        	printf("- - - - - - - - - - - - - - - - - - - - -\n\n");

				printf("\n\n Start Nmap with Port = %s and Target IP = %s \n\n",choose2,choose3);
				char gesamt[512];
				snprintf(gesamt, sizeof(gesamt), "nmap -Pn -sS -sV --script %99s -p%s %s",choose1,choose2,choose3);
				system(gesamt);
				printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
				printf(" Do you want to choose an other script?\n");
				printf(" GUES that the screen will clear up if you type yes \n");
				printf(" Type ´yes´ or ´no´\n");
				char next[10];
				scanf("%99s",&next);
				while ((strcmp(next,"yes")!=0)&&(strcmp(next,"no")!=0)&&(strcmp(next,"exit")!=0)){
					printf("\n FATAL you have to write ´yes´ or ´no´\n");
					scanf("%99s",&next);
					}
				if (strcmp(next,"yes")==0){
					fflush(stdin);
					choice();}


				if  ((strcmp(next,"no")==0)||(strcmp(next,"exit")==0))
					ending();
}


void help()
{
system("clear");
printf("\n\n- - - - - - - - - - - - - Help Bunner - - - - - - - - - - - - -\n"); 
printf("\n\n - This Tool will make a scann with every possible and usefull \n");
printf(" - Nmap Option \n");
printf("\n\n the only thing you have to do is type two arguments:\n");
printf("First: 	The port you would like to scan 	- - -	22,443,445	2-2000\n");
printf("Second:	The IP Adress you would like to scan 	- - -	192.168.2.120 \n");
printf("\n\n Fine? than try it!!...\n");
printf("\n\n Type ´go´ to start \n\n");
char start[10];
scanf("%s",&start);
if (strcmp(start,"exit")==0)
ending();
while (strcmp(start,"go")!=0)
	{
	printf("\n FATAL - you don´t type ´go´\n Try Again\n");
	scanf("%s",&start);
	if (strcmp(start,"exit")==0)
		ending();
	}
fflush(stdin);
choice();
}



int main()
{
	system("clear");

// vuln		1	detecting Vulnerabilities
// default	1	-sC default script
// auth		1	user authentication
// broadcast	1	gather network infos with Broadcast
// brute	1	password auditing BRUTE
// discovery	1	host / servic discovery
// dos		0	related to DOS attacks
// exploit	1 	exploit Vulnerabilities
// external	1	scripts - thrid-party service
// fuzzer	1	scripts for fuzzing
// intrusive	0	Crash smth / lot netTraff
// malware	1	Malware detection
// safe		1	?????
// version	1	Advanced Version detection


choice();

return 0;
}

void ending(){
printf ("\n\n\nByeBye!!!\n");
exit(0);
}


