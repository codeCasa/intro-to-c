#include <stdio.h>

void printBook();
void printAnimal();

typedef struct{
  char* title;
  char* author;
  int dewyDecimal;
} Book;

struct Animal{
  int numberOfLegs;
  char* animalType;
  char* sound;
  char* name;
} cat, dog;

int main() {
  /* code */
  cat.numberOfLegs = 4;
  cat.animalType = "feline";
  cat.sound = "Meow!";
  cat.name = "Cat";

  dog.numberOfLegs = 4;
  dog.name = "Dog";
  dog.animalType = "canine";
  dog.sound = "Woof!";

  struct Animal spider;
  spider.numberOfLegs = 8;
  spider.animalType = "arachined";
  spider.sound = "";
  spider.name = "Spider";

  Book harryPotter, lemony;
  harryPotter.title = "Goblet of Fire";
  harryPotter.author = "J. K. Rowling";
  harryPotter.dewyDecimal = 847;

  lemony.author = "Lemony Snickett";
  lemony.title = "A Series of Untold Events";
  lemony.dewyDecimal = 657;

  Book books[2] = {harryPotter, lemony};

  for (int i = 0; i < 2; i++) {
    /* code */
    printBook(books[i]);
  }
  printAnimal(cat);
  printAnimal(dog);
  printAnimal(spider);
  return 0;
}

void printBook(Book book){
  printf("%s by %s is in section %d.\n", book.title, book.author, book.dewyDecimal);
}

void printAnimal(struct Animal animal){
  printf("%s has %d legs, belongs to the %s family, and makes this sound '%s'.\n",
   animal.name, animal.numberOfLegs, animal.animalType, animal.sound);
}
