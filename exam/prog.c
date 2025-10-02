#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1024

int main(){

    char array1[MAXLINE];

    for(int index=0;index<5;index++){
        array1[index]= 'o';
    }

    char array2[] = "Hello";

    int *array3;
    array3 = malloc(5*sizeof(int));

    printf("%s\n",array1);


    printf("%s\n",array2);

    int index;
    for(index=0;index<5;index++){
        array3[index]=(index+1)*10;
    }

    for(index=0;index<5;index++){
        printf("[%d]: %d\n",index,array3[index]);
    }  
    
    free(array3);


    return 0;
}

/*void printNames(char **names);

struct customer{

    int id;

    char *firstName;

    char *lastName;

    char *email;

};
 
int main(int argc, char*argv[]){
    char *names[]={"Joe","Bill","Vincent","AB","Issac",NULL};
 
    printNames(names);
    return 0;
}

void printNames(char **names) {
    int index = 0;
    while(**names != '\0'){
        printf("[%d]: %s\n", index, names[index]);
        ++index;
    }
}*/
 
/*void printNames(char **names) {
    int index = 0;
    while(**names != '\0' || **names != NULL){
        printf("[%d]: %s\n", index, *names);
        ++names;
        ++index;
    }
}*/