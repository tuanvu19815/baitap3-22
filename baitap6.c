#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a , N , tich  ;
  char ch  ;
  do{
      printf("Nhap bang cuu chuong so : \n");
      scanf("%d" , &N);
      if(N<10 && N>=1){
        for(a=1;a<=9;a++){
            tich = N *a ;
            printf("%d x %d = %d\n", N , a , tich);
        }
        printf("Nhap Y de tiep tuc\n");
        printf("Nhap N de ket thuc\n");
        scanf("%c" , &ch);
        fflush(stdin);
        ch = getchar(); 
        }else printf("Khong hop le");
        if (ch== 'N'){
        printf("Ket thuc chuong trinh");
        }
        if(ch != 'N' & ch != 'Y'){
          printf("Khong hop le");
        }
    }while(ch == 'Y');
}


