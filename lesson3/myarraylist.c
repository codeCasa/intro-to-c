#include "myarrylist.h"
#include <stdio.h>
#include <stdlib.h>

void growArray();

int capacity = 10;
int numElements = 0;
int* myArray;

void createArray(){
  myArray = malloc(sizeof(int)*capacity);
}

void add(int number){
  if(numElements >= capacity){
    //grow array size
    growArray();
  }
  myArray[numElements] = number;
  numElements++;
}

int get(int index){
  if(index < 0 || index>=capacity)
    return -1;
  return myArray[index];
}

int removeInt(int index){
  if(index < 0 || index>=capacity)
    return -1;
  int newCapacity = (numElements -1) * 2;
  int *newArray = malloc(sizeof(int)*newCapacity);
  for(int i=0; i<index; i++){
    newArray[i] = myArray[i];
  }
  for(int i = index+1;i<numElements; i++){
    newArray[i] = myArray[i];
  }
  capacity = newCapacity;
  free(myArray);
  myArray = newArray;
  numElements--;
  return 0;
}

int length(){
  return numElements;
}

void clear(){
  free(myArray);
}

void growArray(){
  int newCapacity = capacity*2;
  int *newArray = malloc(sizeof(int)*newCapacity);
  for(int i = 0; i<numElements; i++){
    newArray[i] = myArray[i];
  }
  capacity = newCapacity;
  free(myArray);
  myArray = newArray;
}
