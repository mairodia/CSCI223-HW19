// ============================================================================
// File: alloc_char.c (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 5/10/2018
// Project: AllocArray
// Professor: Scott Edwards
// Class: CSCI 223 F | TR 4:30PM
// Description:
//      Implementation for the alloc_char.h file.
// ============================================================================

#include <stdio.h>
#include <stdlib.h>

int *Alloc_charArray(int numElems)
{
    return malloc(numElems * sizeof(char));
}

void Disp_charArray(char *ptr, int numElems)
{
    for(int index = 0; index < numElems; ++ index)
    {
        printf("array[%d] = %c\n", index, ptr[index]);
    }
}

void Init_charArray(char *ptr, int numElems, char initVal)
{
    for(int index = 0; index < numElems; ++ index)
    {
        ptr[index] = initVal;
    }
}
