#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int result,num;
    result = 0;
    for(num>=0; num<100;)
    {
        printf("nhap num ");
		scanf("%d", &num);
		result++;
}
printf("nhapsolannhap %d",result);

			return 0;
}
