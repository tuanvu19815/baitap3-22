#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("nhap num");
	scanf("%d", &num);
	
	int output = 1;
	int i;
	
	for(i=0; i<num; i++){
		output= output * (num-i);
	}printf("%d", output);
	
	return 0;
}
