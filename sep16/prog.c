#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    array = malloc(5*sizeof(int));
    /* This can also work
    *array=10;
    array[0]=10;
    array++;
    *array=20;
    *(array+1)=20;
    */

    int index;

    for(index=0;index<5;index++){
        array[index]=(index+1)*10;
    }

    for(index=0;index<5;index++){
        printf("[%d]: %d\n",index,array[index]);
    }  
    
    free(array);

    return 0;
}