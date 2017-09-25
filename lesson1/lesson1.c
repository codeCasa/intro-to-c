#include <stdio.h>

int main(){
  int x = 20;
  int y = 3.5;//being cast down to an int
  double fraction = 3.5;
  //int integers - whole numbers
  //doubles - decimal numbers
  //long really big integers
  //floats - decimal values but theuy floating point arithmetic
  //chars characters 'c' 'a' or integer digits
  //strings or character arrays
  square(1);
  square(2);
  square(3);
  square(4);
  return 0;
}

/**
* Takes in a integer and prints the square of the number
**/
void square(int numberTosquare){
  printf("The square of %d is: %d\n", numberTosquare,numberTosquare*numberTosquare);
}
