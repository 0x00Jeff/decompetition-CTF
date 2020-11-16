#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sum(int arg, char **size){
	unsigned char var = atoi(size[1]);
	printf("SIZE: %d\n", var);
	if(var >=0xf8)
	puts("Too long!");
	else{
	char buff[0xf7];
	memset(buff, 0, sizeof(buff));
	memcpy(buff, size[2], atoi(size[1]));
	printf("Got: %s\n", buff);			        }
}

void win() {
	printf("How did you get here??\n");
	exit(42);
}

int main(int argc, char *argv[]){
	if(argc <= 2)
		return 0;
	sum(argc, argv);
	return 0;
}

