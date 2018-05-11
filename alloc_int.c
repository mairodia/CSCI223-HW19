// =======================================================================
// File: alloc_int.c (Spring 2018)
// =======================================================================
// Programmer: Jennifer King
// Date: 5/10/2018
// Project: AllocArray
// Professor: Scott Edwards
// Class: CSCI 223 | TR 4:30PM
// Description:
//      Implementation for alloc_int.h file
// =======================================================================
#include <stdio.h>
#include <stdlib.h>

int *Alloc_intArray(int numElems)
{
    return malloc(numElems * sizeof(int));
}

void Disp_intArray(int *ptr, int numElems)
{
    for(int index = 0; index < numElems; ++index)
    {
        printf("array[%d] = %d\n", index, ptr[index]);
    }
}

void Init_intArray(int *ptr, int numElems, int initVal)
{
    for(int index = 0; index < numElems; ++index)
    {
        ptr[index] = initVal;
    }
}
