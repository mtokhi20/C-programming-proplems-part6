#include<stdio.h>
int str_len(char * str);
void main (main){
       char ch[100];
       char*p;
       int counter;
       p=ch;
       printf("Enter The String ");
       scanf("%s",ch) ;
        counter=str_len(p);
       printf("The length of string : %d \n",counter);
}
int str_len(char * str)
{
    int counter=0;
    while (*str !='\0'){
        counter++;
          str++;
          }
    return counter;
}
