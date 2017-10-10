#include <stdio.h>


int main(int argc, char const *argv[]) {
  /* code */
  if(argc < 2)
    printf("Too little arguments\n");
  printf("The first argument is the program name: %s\n", argv[0]);
  printf("The proceeding arguments are those passed into the program\n");
  printf("Opening file: %s\n", argv[1]);
  FILE *filePointer;

  filePointer = fopen(argv[1], "r");//open in read only mode
  char buffer[255];
  int lineNumber = 0;
  while(fgets(buffer, 255,(FILE*)filePointer)){
    printf("%d: %s\n",lineNumber, buffer);
    lineNumber++;
  }
  fclose(filePointer);

  FILE *newFile = fopen("myName.txt", "w+");//open or create if file does not exist in read/write mode
  fputs("This is lesson 4 of Coding With Casa.\n",newFile);
  fclose(newFile);
  return 0;
}
