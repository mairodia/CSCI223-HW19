// ============================================================================
// File: alloc_double.c (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 5/10/2018
// Project: AllocArray
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// ============================================================================

#include <stdio.h>
#include <stdlib.h>

int *Alloc_doubleArray(int numElems)
{
    return malloc(numElems * sizeof(double));
}

void Disp_doubleArray(double *ptr, int numElems)
{
    for(int index = 0; index < numElems; ++index)
    {
        printf("array[%d] = %f\n", index, ptr[index]);
    }
}

void Init_doubleArray(double *ptr, int numElems, double initVal)
{
    for(int index = 0; index < numElems; ++index)
    {
        ptr[index] = initVal;
    }
}
