#include <stdio.h>

int main() {
  char* myString = "Hello";//String aka character array
  char charArray[5] = {',',' ','B','o','B'};
  printf("%s%s\n", myString, charArray);
  double grades[10] = {84.5,20.5,88,100,0,76,95,100,110,56.98};
  int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;
  for(int i=0; i<10; i++){//in C arrays are 0 indexed
    int grade = grades[i];
    if(grade>90){
      numA++;
    }else if(grade<=90 && grade>80){
      numB++;
    }else if(grade<=80 && grade>75){
      numC++;
    }else if(grade<=75 && grade>70){
      numD++;
    }else{
      numF++;
    }
  }
  printf("Bob has the following grades\n");
  printf("%d A's\n%d B's\n%d C's\n%d D's\n%d F's\n",numA,numB,numC,numD,numF);
  //index into String
  printf("%c\n", myString[3]);
  return 0;
}
