#include <stdio.h>

void square(int *numToSquare);
void add2(int number);

void main(){
  int* x; //a pointer declaration, aka reserve a space in memory
  *x = 5; //deference the pointer to gain access to the value
  int *y; //declare another integer pointer
  y=x; //set the address of y to address of x
  printf("the memory address of x is %x\n", x);
  printf("the value of x is %d\n", *x);
  *x = 15;
  printf("the memory address of y is %x\n", y);
  printf("the value of y is %d\n", *y);
  *y = 20;
  square(y);
  printf("y squared is %d\n",*y);
  int b=0;
  add2(b);
  printf("b + 2 = %d\n", b);
}


void square(int *numToSquare){
  *numToSquare = (*numToSquare)*(*numToSquare);
}

void add2(int number){
  number += 2;
}
