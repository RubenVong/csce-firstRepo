#include "mylibrary.h"
    #include <stdio.h>
    #include <string.h>

    void printMyStruct(const MyStruct *data) {
        if (data != NULL) {
            printf("ID: %d, Name: %s, Value: %.2f\n", data->id, data->name, data->value);
        }
    }