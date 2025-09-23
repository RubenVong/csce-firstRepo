#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100

int main(){
    /*char array[MAXLINE];

    FILE *fptr = fopen("strings.txt", "r"); //Opening the file, using read mode
    if (fptr == NULL) {
        perror("Error opening file"); //Error handling
        return 1;
    }

    while (fgets(array, MAXLINE, fptr) != NULL) { //Read through a line in file until reaches null
        printf("%s", array);
    }
    printf("\n");
    fclose(fptr); //Closes pointer*/

    FILE *fptr;
    char buffer[MAXLINE];
    char *array[MAXLINE];
    char *str;
    int len=0;

    fptr=fopen("strings.txt","r");
    if(fptr==NULL){
        exit(1);
    }

    while(fgets(buffer,MAXLINE-1,fptr)!=NULL){
        buffer[strlen(buffer)-1]='\0'; //replace '\n' with '\0'
        str = malloc(MAXLINE);
        strcpy(str,buffer);
        array[len]=str;
        len++;
    }
    fclose(fptr);

    for(int index=0;index<len;index++){
        printf("[%d]: %s\n",index,array[index]);
    

    return 0;
}

