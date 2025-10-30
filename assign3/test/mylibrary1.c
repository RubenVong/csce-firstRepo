#include "mylibrary.h"
    #include <stdio.h>
    #include <string.h>

    void initializeMyStruct(MyStruct *data, int id, const char *name, float value) {
        if (data != NULL) {
            data->id = id;
            strncpy(data->name, name, sizeof(data->name) - 1);
            data->name[sizeof(data->name) - 1] = '\0'; // Ensure null-termination
            data->value = value;
        }
    }