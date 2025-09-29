#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100

void loadArray(char *file);
void showArray(char *dest[], int len);
char *array[MAXLINE];
int len=0;

int main(){
    char file[] = "strings.txt";
    
    loadArray(file);

    showArray(array, len);

    return 0;
}

void loadArray(char *file){ //accepts a file name and add contents to char array and set a length by int
    FILE *fptr;
    char buffer[MAXLINE];
    char *str;

    fptr=fopen(file,"r");
    if(fptr==NULL){
        exit(1);
    }

    while(fgets(buffer,MAXLINE-1,fptr)!=NULL){
        buffer[strlen(buffer)-1] = '\0'; 
        str = malloc(MAXLINE);
        strcpy(str,buffer);
        array[len]=str;
        len++;
    }

    fclose(fptr);
}

void showArray(char *dest[], int len){ //accepts a char array of pointers and it's length
    for(int index=0;index<len;index++){
        printf("[%d]: %s\n",index,dest[index]);
    }
}