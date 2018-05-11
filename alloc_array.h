// ============================================================================
// File: alloc_array.h (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 5/10/2018
// Project: AllocArray
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// ============================================================================

#ifndef ALLOC_ARRAY_H
#define ALLOC_ARRAY_H

// #include files
#include    "alloc_int.h"
#include    "alloc_char.h"
#include    "alloc_double.h"

// macros (use token-pasting operator to map function calls here...)

#define AllocArray(type, size)                          Alloc_##type##Array(size)
#define InitArray(type, ptr, size, val)         Init_##type##Array(ptr, size, val)
#define DispArray(type, ptr, size)                      Disp_##type##Array(ptr, size)

#endif  // ALLOC_ARRAY_H
