#include <stdio.h>
#include "intArrayList.h"

void main(){
  initArray();
  for(int i = 0; i<15; i++){
    add(i);
  }
  toString();
  printf("the number of elements in our array is %d\n", length());
  printf("-----------------------------------\n");
  if(removeInt(5)==0)
    toString();
  if(removeInt(54) >= 0){
    //do nothing
  }else{
    printf("Failed to find int at index 54 to remove\n");
  }
  int sum = 0;
  for(int i=0; i<length(); i++)
    sum+=get(i);
  printf("the sum of the array %d\n", sum);
  printf("the average of the array %f\n", (double)sum/length());
}
