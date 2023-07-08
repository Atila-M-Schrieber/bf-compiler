//Function & variable definitions

//Vars:
unsigned char out[6];


//Functs:
int sqr(int num){
	return num * num;
}
void dispint(int pos, unsigned char out[], char fillchar){
	for(int i = 0; i < 6; i++)
		out[i] = fillchar;

	if(pos < 0)
		pos += 30000;

	if(pos >= 10000){
		out[0] = (char)(pos / 10000 + 48);
		out[1] = (char)(pos % 10000 / 1000 + 48);
		out[2] = (char)(pos % 1000 / 100 + 48);
		out[3] = (char)(pos % 100 / 10 + 48);
		out[4] = (char)(pos % 10 + 48);
	}
	else if(pos >= 1000){
		out[0] = (char)(fillchar);
		out[1] = (char)(pos / 1000 + 48);
		out[2] = (char)(pos % 1000 / 100 + 48);
		out[3] = (char)(pos % 100 / 10 + 48);
		out[4] = (char)(pos % 10 + 48);
	}
	else if(pos >= 100){
		out[0] = (char)(fillchar);
		out[1] = (char)(pos / 100 + 48);
		out[2] = (char)(pos % 100 / 10 + 48);
		out[3] = (char)(pos % 10 + 48);
		out[4] = (char)(fillchar);
	}
	else if(pos >= 10){
		out[0] = (char)(fillchar);
		out[1] = (char)(fillchar);
		out[2] = (char)(pos / 10 + 48);
		out[3] = (char)(pos % 10 + 48);
		out[4] = (char)(fillchar);
	}
	else{
		out[0] = (char)(fillchar);
		out[1] = (char)(fillchar);
		out[2] = (char)(pos + 48);
		out[3] = (char)(fillchar);
		out[4] = (char)(fillchar);
	}
}
void value(char ascii, unsigned char out[], char fillchar){
	if(ascii <= -100 || ascii >= 1000){
		out[0] = 79;
		out[1] = 79;
		out[2] = 66;
	}
	else if(ascii <= -10){
		out[0] = (char)(45);
		out[1] = (char)(-ascii / 10 + 48);
		out[2] = (char)(-ascii % 10 + 48);
	}
	else if(ascii < 0){
		out[0] = (char)(45);
		out[1] = (char)(-ascii + 48);
		out[2] = (char)(fillchar);
	}
	else if(ascii < 10){
		out[0] = (char)(fillchar);
		out[1] = (char)(ascii + 48);
		out[2] = (char)(fillchar);
	}
	else if(ascii < 100){
		out[0] = (char)(fillchar);
		out[1] = (char)(ascii / 10 + 48);
		out[2] = (char)(ascii % 10 + 48);
	}
	else if(ascii >= 100){
		out[0] = (char)(ascii / 100 + 48);
		out[1] = (char)(ascii % 100 / 10 + 48);
		out[2] = (char)(ascii % 10 + 48);
	}

	if(ascii < 128 && ascii >= 0){
		switch(ascii){
			case 0:
				out[3] = 'N';
				out[4] = 'U';
				out[5] = 'L';
				break;
			case 1:
				out[3] = 'S';
				out[4] = 'O';
				out[5] = 'H';
				break;
			case 2:
				out[3] = 'S';
				out[4] = 'T';
				out[5] = 'X';
				break;
			case 3:
				out[3] = 'E';
				out[4] = 'T';
				out[5] = 'X';
				break;
			case 4:
				out[3] = 'E';
				out[4] = 'O';
				out[5] = 'T';
				break;
			case 5:
				out[3] = 'E';
				out[4] = 'N';
				out[5] = 'Q';
				break;
			case 6:
				out[3] = 'A';
				out[4] = 'C';
				out[5] = 'K';
				break;
			case 7:
				out[3] = 'B';
				out[4] = 'E';
				out[5] = 'L';
				break;
			case 8:
				out[3] = fillchar;
				out[4] = 'B';
				out[5] = 'S';
				break;
			case 9:
				out[3] = fillchar;
				out[4] = 'H';
				out[5] = 'T';
				break;
			case 10:
				out[3] = fillchar;
				out[4] = 'L';
				out[5] = 'F';
				break;
			case 11:
				out[3] = fillchar;
				out[4] = 'V';
				out[5] = 'T';
				break;
			case 12:
				out[3] = fillchar;
				out[4] = 'F';
				out[5] = 'F';
				break;
			case 13:
				out[3] = fillchar;
				out[4] = 'C';
				out[5] = 'R';
				break;
			case 14:
				out[3] = fillchar;
				out[4] = 'S';
				out[5] = 'O';
				break;
			case 15:
				out[3] = fillchar;
				out[4] = 'S';
				out[5] = 'I';
				break;
			case 16:
				out[3] = 'D';
				out[4] = 'L';
				out[5] = 'E';
				break;
			case 17:
				out[3] = 'D';
				out[4] = 'C';
				out[5] = '1';
				break;
			case 18:
				out[3] = 'D';
				out[4] = 'C';
				out[5] = '2';
				break;
			case 19:
				out[3] = 'D';
				out[4] = 'C';
				out[5] = '3';
				break;
			case 20:
				out[3] = 'D';
				out[4] = 'C';
				out[5] = '4';
				break;
			case 21:
				out[3] = 'N';
				out[4] = 'A';
				out[5] = 'K';
				break;
			case 22:
				out[3] = 'S';
				out[4] = 'Y';
				out[5] = 'N';
				break;
			case 23:
				out[3] = 'E';
				out[4] = 'T';
				out[5] = 'B';
				break;
			case 24:
				out[3] = 'C';
				out[4] = 'A';
				out[5] = 'N';
				break;
			case 25:
				out[3] = fillchar;
				out[4] = 'E';
				out[5] = 'M';
				break;
			case 26:
				out[3] = 'S';
				out[4] = 'U';
				out[5] = 'B';
				break;
			case 27:
				out[3] = 'E';
				out[4] = 'S';
				out[5] = 'C';
				break;
			case 28:
				out[3] = fillchar;
				out[4] = 'F';
				out[5] = 'S';
				break;
			case 29:
				out[3] = fillchar;
				out[4] = 'G';
				out[5] = 'S';
				break;
			case 30:
				out[3] = fillchar;
				out[4] = 'R';
				out[5] = 'S';
				break;
			case 31:
				out[3] = fillchar;
				out[4] = 'U';
				out[5] = 'S';
				break;
			case 127:
				out[3] = 'D';
				out[4] = 'E';
				out[5] = 'L';
				break;
			default:
				out[3] = fillchar;
				out[4] = ascii;
				out[5] = fillchar;
		}
	}
	else{
		out[3] = 33;
		out[4] = 63;
		out[5] = 33;
	}
}
char * visualize(char mem[], char *ptr, char *ptr0, char prgrm[], long pos, long pos0){
	int boxw = 8;
	int boxh = 6;
	int rowl = ((show * 2 + 1) * boxw + 2);
	int colh = boxh * 2;
	int numchar = rowl * colh;
	char vis[numchar];
	char bchar;
	pos--;
	pos0--;

	/*
	 * show = 1
	 *
	 * ###124#####125#####126###
	 * #       #       #       #
	 * #  114  #   7   #   90  #
	 * #   r   #  BEL  #   Z   #
	 * #       #       #       #
	 * ###########   ###########
	 *             ^
	 * @@@@@@@@@@@   @@@@@@@@@@@
	 * @       @       @       @
	 * @   +   @   +   @   >   @
	 * @       @       @       @
	 * @@@@@@@@@@@@@@@@@@@@@@@@@ 
	 */

	for(int row = 0; row < colh; row++){
		if(row < colh / 2)
			bchar = 35;
		else
			bchar = 64;

		for(int col = 0; col < rowl - 1; col++){
			char *ptrc = ptr - show + (col / boxw);

			if((row == 0 && !(sqr((boxw + 1) / 2 - col % boxw) < 5))  ||
				row == colh - 1 ||
				(!(sqr(row - boxh) - 1) && !(sqr((((1 + 2 * show) * boxw + 1) / 2) - col) < 3))  || //&& !((sqr((((1 + 2 * show) * boxw + 2) / 2) - col) - 1) < 2)) for gap 
				(sqr(boxh - row) && !(col % boxw)))
					putchar(bchar);
			else if(row == 0 && sqr((boxw + 1) / 2 - col % boxw) < 5){
				dispint(ptrc - ptr0, out, 35);
				putchar(out[0]);
				putchar(out[1]);
				putchar(out[2]);
				putchar(out[3]);
				putchar(out[4]);
				col += 4;
			}
			else if(row == boxh && col == ((1 + 2 * show) * boxw) / 2)
				putchar(94);
			else if(!(row - boxh / 2 + 1) && !((col % boxw) - boxw / 2 + 1)){
				value(*ptrc, out, 32);
				putchar(out[0]);
				putchar(out[1]);
				putchar(out[2]);
				col += 2;
			}
			else if(!(row - boxh / 2) && !((col % boxw) - boxw / 2 + 1)){
				value(*ptrc, out, 32);
				putchar(out[3]);
				putchar(out[4]);
				putchar(out[5]);
				col += 2;
			}
			else if(!(row - (0 + 3 * boxh) / 2) && !((col % boxw) - boxw / 2 + 1)){
				value(prgrm[pos - show + (col / boxw) + 1], out, 32);
				putchar(out[3]);
				putchar(out[4]);
				putchar(out[5]);
				col += 2;
			}
			else
				putchar(32);
		}
		//vis[row * (rowl + 1)] = '\n';
		putchar('\n');
	}
}

int interpret(FILE* bf){
	char mem[30000] = {0};
	char *ptr = mem;
	char *ptr0 = ptr;


	fseek(bf,0,SEEK_END);
	long bfSize = ftell(bf);
	char* prgrm = (char*)malloc(bfSize);
	rewind(bf);

	for(int i = 0; i < bfSize; i++)
		prgrm[i] = fgetc(bf);

	long pos = 0;
	long pos0 = pos;
	int depth = 0;
	int targetdepth = 0;
	int skip = 0; //0 is normal, 1 is skip to matching ], -1 is go back to matching [
	bool code = false; //is the examined char code?
	long operation = 0;
	bool output = false;
	
	while(pos < bfSize){
		
		code = true;
		output = false;
		operation++;

		if((prgrm[pos]-61)*(prgrm[pos]-61) == 1 && !skip){ // <>
			ptr += prgrm[pos]-61; 
		}
		else if((prgrm[pos]-44)*(prgrm[pos]-44) == 1 && !skip){ // +-
			*ptr -= prgrm[pos]-44; 
			if(*ptr < 0)
				*ptr = 127;
			else if(*ptr > 255)
				*ptr = 0;
		}
		else if((prgrm[pos]-92)*(prgrm[pos]-92) == 1){

			while(skip){
				if(depth != targetdepth){
					pos += skip;
					if((prgrm[pos]-92)*(prgrm[pos]-92) == 1)
						depth -= prgrm[pos]-92; 
				}
				else{
					depth += skip;
					skip = 0;
				}
			}

			if(!skip){ // !*ptr && 
				bool back = (92-prgrm[pos] < 0);
				skip = (bool)(!!*ptr * back + !*ptr * !back) * (92-prgrm[pos]);
				targetdepth = depth;
			}

			depth -= prgrm[pos]-92; 
		}
		else if(prgrm[pos] == 46 && !skip){
			putchar(*ptr);
			output = true;
		}
		else if(prgrm[pos] == 44 && !skip){
			*ptr = getchar();
		}
		else{ 
			if(prgrm[pos] == 92) //escape in code
				pos++;
			code = false;
			operation--;
		}

		if(!skip)
			pos++;

		if(code && show){
			printf("Operation %d", operation);
			if(output){
				printf("\tOUTPUT: ");
				value(*ptr, out, 32);
				putchar(out[3]);
				putchar(out[4]);
				putchar(out[5]);
			}
			putchar('\n');
			visualize(mem, ptr, ptr0, prgrm, pos, pos0);
			putchar('\n');
			putchar('\n');
		}
	}
}

int compile(FILE* bf, char *filename, int compmode){
	FILE * bfout = fopen(strcat(filename, ".c"), "w");

	fprintf(bfout, "#include <stdio.h>\n");

	fprintf(bfout, "char mem[30000] = {0};\n");
	fprintf(bfout, "char *ptr = mem;\n");

	fprintf(bfout, "int main(){\n");


	fseek(bf,0,SEEK_END);
	long bfSize = ftell(bf);
	char* prgrm = (char*)malloc(bfSize);
	rewind(bf);

	for(int i = 0; i < bfSize; i++)
		prgrm[i] = fgetc(bf);

	long pos = 0;
	
	while(pos < bfSize){
		
		if((prgrm[pos]-61)*(prgrm[pos]-61) == 1) // <>
			fprintf(bfout, "ptr += %d;\n", prgrm[pos]-61);
		else if((prgrm[pos]-44)*(prgrm[pos]-44) == 1){ // +-
			fprintf(bfout, "*ptr -= %d;\t", prgrm[pos]-44);
			fprintf(bfout, "if(*ptr < 0) ");
				fprintf(bfout, "*ptr = 127;\t");
			fprintf(bfout, "else if(*ptr > 255) ");
				fprintf(bfout, "*ptr = 0;\n");
		}
		else if(prgrm[pos] == 91)
			fprintf(bfout, "while(*ptr){\n");
		else if(prgrm[pos] == 93)
			fprintf(bfout, "}\n");
		else if(prgrm[pos] == 46)
			fprintf(bfout, "putchar(*ptr);\n");
		else if(prgrm[pos] == 44)
			fprintf(bfout, "*ptr = getchar();\n");
		else{ 
			if(prgrm[pos] == 92) //escape in code
				pos++;
		}
		pos++;
	}

	fprintf(bfout, "}");
	fclose(bfout);

	//compile
	//doing this the clunky way bcd strcat & strcpy were giving me shit with 'char *command[100]', and getting no warnings for 'char *command' but ended up with a segmentation fault
	char *command[100];

	if(compmode == 1)
		strcat(command, "x86_64-w64-mingw32-");
	strcat(command, "gcc ");
	strcat(command, filename);
	strcat(command, " -o ");
	strncat(command, filename, strlen(filename) - 2);
	if(compmode == 1)
		strcat(command, ".exe");
	system(command);

	//remove .c
/*	strcpy(command, "rm ");
	strcat(command, filename);
	system(command);*/
}
