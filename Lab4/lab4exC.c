
//  lab2exC.c
// ENSF 337 Fall 2019 Lab 4 Exercise  C
//	Jiho Kim

#include <stdio.h>
#define ELEMENTS(x) sizeof(x)/sizeof(x[0]) 


int main()
{
    
    int size;
    int a[] = {45, 67, 89, 24, 54};
    double b[20] = {14.5, 61.7, 18.9, 2.4, 0.54};
    
    size = ELEMENTS(a);


    printf("Array a has 5 elements and macro ELEMENTS returns %d\n", size);
    
    size = ELEMENTS(b);
    
  
    printf("Array b has 20 elements and macro ELEMENTS returns %d\n", size);
    
    return 0;
}

