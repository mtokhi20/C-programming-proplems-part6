#include<stdio.h>

void main(void){
    char ch1[20];
    char ch2[20];
    char *s1=ch1;
    char *s2=ch2;

    printf("Enter first string ");
    scanf("%s",ch1) ;
    printf("Enter second string ");
    scanf("%s",ch2) ;
     while(*s1){
        s1++;
     }
     while (*s2 !='\0'){
          *s1=*s2;
          s1++;
          s2++;

          }
     *s1='\0';
        printf("concate array %s \n",ch1);


}
