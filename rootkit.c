#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct str{
	struct str *next;
	int number;
	char *name;
	        
}node;

int find_rootkit(struct str *node){
	if(!node)
		return -1;
	do{
		if(node -> number == 1337){
			if(!strcmp(node -> name, "h4x0r"))
				return 1;
		}
		node = node -> next;
	}while(node);

	return 0;
	                                             
}
	 
struct str *alloc_task(char *ptr, int num, struct str *node) {
	struct str *heap = (struct str *)  malloc(0x18);
        heap -> name = malloc(strlen(ptr) + 1);
        strcpy(heap -> name, ptr);
        heap -> number = num;
        heap -> next = node;
        return heap;
}
	 
int main(int argc, char *argv[] ){
	int number;
        char buff[0x40];
        struct str *node = 0;
        while(scanf("%s %d", buff, &number) == 2)
		node = alloc_task(buff, number, node);

	int res = find_rootkit(node);
	printf("find_rootkit() = %d\n",res);
        return 0; 
}  
	                                                                                    
	                                                                                      
	                                                                                        
