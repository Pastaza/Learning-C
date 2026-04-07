#include <stdio.h>

int main(){
  char name[100];
  int age;
  printf("What is your name? ");
  scanf("%s", name);
  printf("Hello %s how old are you? ", name);
  scanf("%d", &age);
  printf("Hello %s you are %d years old!\n", name, age);
  if (age > 20) {
    printf("You are %d, so old!\nHow were the dinosaurs like %s?\n", age, name);
  } else {
    printf("Some people are old %s, your aren't becuase you are %d.\n", name, age);
  }
  return 0;
}
