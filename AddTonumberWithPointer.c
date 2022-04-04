#include<stdio.h>
void main (main){
     int number1,number2,sum=0;
     int *ptr1=&number1;
     int *ptr2=&number2;

    printf("Enter Number1  ");
    scanf("%d",&number1);
    printf("Enter Number1  ");
    scanf("%d",&number2);
    sum=*ptr1 + *ptr2;
    printf(" The sumation is %d \n ",sum);


}
