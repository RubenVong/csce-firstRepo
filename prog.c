#include <stdio.h>
//# Pound sign use to call a directive
//Function Prototype
//You can not leave a char Array undeclared in methods
//
void showArray(int array[], int size);

int main(){
    char str1[] = {'H', 'e', 'l', 'l', 'o'};
    //char str2[] = "Hello"; 
    int numbers[] = {10,20,30,40,50};

    printf("%p:%s\n", str1, str1);
    showArray(numbers, 5);
    return 0;

}

void showArray(int array[], int size) {
    int index;

    for(index=0;index<size;index++){
        printf("[%d]\n", array[index]);
    }
}