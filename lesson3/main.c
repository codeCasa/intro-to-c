#include "myarrylist.h"
#include <stdio.h>

int main(){
  createArray();
  int size = 12;
  int i = 0;
  while (i<size){
    add(i*i);
    i++;
  }
  printf("The length of our arraylist is %d\n", length() );
  printf("The elements of the array are\n");
  i = 0;
  while (i<size){
    printf("%d\n",get(i));
    i++;
  }
  if(removeInt(5)==0)
    printf("The length of our arraylist is %d\n", length() );
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
  clear();
  return 0;
}
