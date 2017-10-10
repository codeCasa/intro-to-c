#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  printf("Wecome to our console IO program\nStart by entering your name:\n");
  char* myName;
  scanf("%s", myName);
  printf("Hello %s, how old are you?\n", myName);
  int age;
  scanf("%d", &age);
  if(age < 18)
    printf("Wow %s, you're young\n", myName);
  if(age >= 18 && age <45)
    printf("Wow %s, you're in your prime\n", myName);
  if(age >=45)
    printf("Wow %s, you must be mature\n", myName);
  return 0;
}
