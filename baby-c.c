#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(int arg1, int arg2) {
	while(arg1 != arg2){
		if(arg1 > arg2)
			arg1 -= arg2;
		else if(arg1 < arg2)
			arg2 = arg2 - arg1;
	}
	return arg1;
}

int main(int argc, char** argv) {
	if(argc!=3){
		fprintf(stderr, "USAGE: %s <num1> <num2>\n", argv[0]);
		exit(1);
	}
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);

	printf("foo(%d, %d) = %d\n", arg1, arg2, foo(arg1, arg2));
	return 0;
}

