#include "intArrayList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void growArray();
//our minimum array size
int minSize = 10;
//our pointer or array
int *myArray;
//number of elements currently in array
int numElements = 0;

//initialize our array
void initArray(){
  //reserve a block of memory the size of an int time the minimum array size
  myArray = malloc(sizeof(int)*minSize);
}

int add(int number){
  //if we have reached our max capacity we need to increase our array size
  if(numElements >= minSize){
    growArray();
  }
  //add the element to our array
  myArray[numElements] = number;
  //increase the number of elements in the list
  numElements++;
  return 0;
}

int get(int index){
  //if we were given a false index then return -1
  if(index>=numElements || index < 0)
    return -1;
  //else return the value requested
  return myArray[index];
}

int removeInt(int index){
  //if we are given a bad index return -1
  if(index < 0 || index >= numElements-1)
    return -1;
  //form a new array of a smaller size to conserve memory
  int newSize = minSize - 1;
  int *newArray = malloc(sizeof(int)*newSize);
  //repopulate the new array minus the index want to remove
  for(int i=0; i<index; i++){
    newArray[i] = myArray[i];
  }
  for(int i=index+1; i<minSize; i++){
    newArray[i] = myArray[i];
  }
  //reset our minimum size
  minSize = newSize;
  //free up the old memory chunk we were using
  free(myArray);
  //set our array to our new memory address
  myArray = newArray;
  numElements--;
  return 0;
}

void toString(){
  //print the number of elements in our array
  printf("There are %d elements in the list.\n", length());
  for (int i = 0; i < numElements; i++) {
    printf("Int %d at index: %d\n", get(i),i);
  }
}

int length(){
  //the number of elements in our array
  return numElements;
}

void growArray(){
  //declare a new size for our array
  //try double the size at first to reduce times needed to grow and consume memory
  int newSize = minSize*2;
  //reserve space for our new array
  int *newArray = malloc(sizeof(int)*newSize);
  //copy over the elements into our new array
  for(int i=0; i<minSize; i++){
    newArray[i] = myArray[i];
  }
  minSize = newSize;
  //free up space
  free(myArray);
  myArray = newArray;
}
