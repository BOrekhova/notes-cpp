#include <iostream>

// Pointers is an address of the object
// pointers are objects, they occupy memory

int main()
{
    int x = 3;
    std::cout << &x; // print the address of x
    int* y = nullptr; // type -- pointer at int // nullptr -- 0 pointer
    int* t = &x; // t saves the address of x
    std::cout << *t; // dereferencing t >> print x
    int* ptr_value = new int; // to reserve the memory
}