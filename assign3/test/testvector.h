#ifndef TESTVECTOR_H
#define TESTVECTOR_H

struct vector {
    int* data;      // Pointer to the dynamically allocated array
    int size;       // Current number of elements in the vector
    int capacity;   // Maximum number of elements the vector can hold without reallocating
}; 

typedef struct vector *Vector;

Vector initVector(int initialCapacity);
void addElement(Vector *vec, int value);
void freeVector(Vector vec);

#endif

