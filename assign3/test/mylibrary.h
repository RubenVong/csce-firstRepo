#ifndef MYLIBRARY_H
#define MYLIBRARY_H

    // Define a struct
typedef struct {
        int id;
        char name[50];
        float value;
} MyStruct;

    // Declare functions that use MyStruct
void initializeMyStruct(MyStruct *data, int id, const char *name, float value);
void printMyStruct(const MyStruct *data);

#endif