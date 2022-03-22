#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c[100], max, min;
	printf("nhap so phan tu cua day N = ");
	scanf("%d", &a);
	for(b=1; b<=a; b++) {
		printf("c[%d]: ",b);
		scanf("%d", &c[b]);	
	}
	max=c[1];
	for(b=1; b<=a; b++) {
	    if(c[b]>max) {
	    	max=c[b];
		}
	}
	printf("\nso lon nhat la: %d", max);
	min=c[1];
	for(b=1; b<=a; b++) {
		if(c[b]<min) {
			min=c[b];
		}
	}
	printf("\nso nho nhat la: %d", min);
	}

