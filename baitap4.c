#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char kitu;
  while(1){
    printf("nhapkitu\n");
    fflush(stdin);
    scanf("%c",&kitu);
      if(kitu==' '){
      break;}
    if(kitu>='a'&&kitu<='z'||kitu>='A'&&kitu<='z')
    {printf("con vk dang nhap chu cai\n");}
    else if(kitu>=48&&kitu<=57)
    {printf("con vk dang nhap so\n");}
    else
    printf("con vk dang nhap ki tu db\n");
    }
  printf("het time roi con vk");
  }


