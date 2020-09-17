#include<stdio.h>

typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len){
	size_t i;
	i=0;
	if(start[i]==0x6d) printf("Little endian \n");
	else printf("Big endian \n");
}
int main(void){
	int a = 15213;
	long num_l = 1;
	int size = sizeof num_l;
	
	if(size==8) printf("64-bit \n");
	else printf("32-bit \n");

	show_bytes((pointer) &a, sizeof(int));

	return 0;
}
