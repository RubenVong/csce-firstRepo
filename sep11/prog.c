#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 64

struct student { //total byte usage is 132
    int id; //4
    char first[SIZE]; //64
    char last[SIZE]; //64
};

void showStudent(struct student stud);
void showStudentRef(struct student *stud);

int main(){
   struct student student1;
   student1.id=1001;
   strcpy(student1.last,"Smith");
   strcpy(student1.first,"Joe");

   struct Student *student2;
   student2 = malloc(sizeof(struct student));
   //student2->id=1002;
   //strcpy(student2->last,"Jones");
   //strcpy(student2->first,"Jack");

   showStudent(student1);
   showStudentRef(&student1);
   showStudentRef(student2);
   free(student2);
   return 0;
}

void showStudent(struct student stud){ //This will display memory block
    printf("id: %d\n",stud.id);
    printf("First: %s\n",stud.first);
    printf("Last: %s\n",stud.last);
    printf("Size: %d\n",sizeof(stud));
}

void showStudentRef(struct student *stud){ //This will display the pointer
    printf("id: %d\n",stud->id);
    printf("First: %s\n",stud->first);
    printf("Last: %s\n",stud->last);
    printf("Size: %d\n",sizeof(stud));
}