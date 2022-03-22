#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,num;
	printf("nhap so bat ky:");
	scanf("%d", &a);
	for (b = 0; a!=0; a/=10){
		num = a % 10;
		printf("num = %d\n", num);
		b += num;
// b += n%10;
}
printf("%d\n",b);

	return 0;
}
