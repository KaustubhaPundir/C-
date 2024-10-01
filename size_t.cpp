#include<iostream>
#include<stdlib.h>
using namespace std;
//size_t is a predefined datatype which allocates the largest size/block of memory our system can hold for object.
//size_t takes only positive integers(unsigned int) as arguments.
//size_t is similar or equivalent to unsigned int in cpp but size_t is recommmended when working with +ve and large integers because it is safer and efficient.
// It is guranteed to be big enough to contain the size of the biggest obj a system can hold.
// It is type of result returned by the size of operator
// Malloc is used to dynamically allocate single large block of contigous memory according to the size specified
// malloc simply allocates a memory block according to size specified in the heap 
// It doesnot have idea what data it is pointing to 
// It merely allocates mmoery requested by the user without knowing the type of data to be stored in the memory.
// Malloc Syntax 
// (void*) malloc (size_t size);
// malloc comes under stdlib.h