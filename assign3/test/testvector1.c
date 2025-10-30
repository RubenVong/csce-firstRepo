#include "testvector.h"
#include <stdio.h>
#include <stdlib.h> // Required for malloc, realloc, free

// Function to initialize a new dynamic integer vector
Vector initVector(int initialCapacity) {
    Vector vec = (Vector)malloc(sizeof(Vector));
    vec->data = (int*)malloc(initialCapacity * sizeof(int));
    if (vec->data == NULL) {
        perror("Failed to allocate memory for vector data");
        exit(EXIT_FAILURE);
    }
    vec->size = 0;
    vec->capacity = initialCapacity;

    return vec;
}

// Function to add an element to the vector
void addElement(Vector *vec, int value) {
    Vector vector = *vec; //dereference the pointer
    if (vector->size == vector->capacity) {
        // If capacity is reached, double the capacity
        vector->capacity *= 2;
        vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
        if (vector->data == NULL) {
            perror("Failed to reallocate memory for vector data");
            exit(EXIT_FAILURE);
        }
    }
    vector->data[vector->size++] = value;
}

// Function to free the memory allocated for the vector
void freeVector(Vector vec) {
    free(vec->data);
    vec->data = NULL; // Set to NULL to prevent dangling pointer issues
    vec->size = 0;
    vec->capacity = 0;
}