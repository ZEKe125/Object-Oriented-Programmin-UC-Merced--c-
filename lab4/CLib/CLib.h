//: C04:CLib.h
// Header file for a C-like library
// An array-like entity created at runtime
typedef struct CStashTag {
 int size; // Size of each space
 int quantity; // Number of storage spaces
 int next; // Next empty space
 // Dynamically allocated array of bytes:
 unsigned char* storage;
} CStash; 