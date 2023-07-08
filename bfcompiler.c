/*
 * Brainfuck is a Turing-complete programming language
 * It consists of a pointer, ways to move it, ways to change the pointed value (1 byte), and loops
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int show = 0; //how many things to see before & after pointer

#include "bfcomplib.h"

int main(int argc, char **argv){
	int filearg = 0;

	if(!strcmp(argv[1], "interpret") || !strcmp(argv[1], "int") || !strcmp(argv[1], "-i"))
		filearg = 3;
	else if(!strcmp(argv[1], "compile") || !strcmp(argv[1], "comp") || !strcmp(argv[1], "-c"))
		filearg = 2;
	else
		printf("Wrong argument. interpret int -i compile comp -c are valid, then if interpreting, set length of tape shown, then the filename, and if compiling, followed by the output file, and '0' for LINUX, or '1' if you want it on w*ndows.\n");

	FILE* bf = fopen(argv[filearg], "r");
	if(!bf && filearg){
		printf("No file dumbass");
		exit(1);
	}

	if(filearg == 2)
		compile(bf, argv[3], argv[4][0] - 48);
	else if(filearg == 3){
		show = argv[2][0] - 48;
		interpret(bf);
	}

	return 0;
}
