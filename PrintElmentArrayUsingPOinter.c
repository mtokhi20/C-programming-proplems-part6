#include<stdio.h>

void main (main){
     int arr[100];
     int size,i;
     int *ptr=arr;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
        i=0;
     while(i<size){
       printf("Element of Array [%d] : %d \n",i, *ptr++);
       i++;
      }
}
