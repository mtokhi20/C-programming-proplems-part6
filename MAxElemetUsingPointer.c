#include<stdio.h>
#include <stdlib.h>


void main(void){
    int *ptr;
    int i,size,max=0;

    printf("Enter size ");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));
    //scan Element
    for(i=0;i<size;i++){
        //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",ptr+i);
    }
    //print Element
    for (i=0;i<size;i++){
        printf("Array Element [%d] : %d\n",i,*(ptr+i));
    }
    //max
     for(i=0;i<size;i++){

        if(*(ptr+i)>max)
            max=*(ptr+i);
     }
      printf("max = %d\n",max);
}
