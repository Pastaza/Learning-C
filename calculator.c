#include <stdio.h>

int main(){
  int num1;
  char operation;
  int num2;
  float answer;

  printf("Welcome to the calculator\nWhat is your first number?\n");
  scanf("%d", &num1);
  printf("What operation would you like to do to it?\n");
  scanf(" %c", &operation);
  printf("Great choice!\nWhat is your second number?\n");
  scanf("%d", &num2);

  if(operation == '+') {
      answer = (float)num1 + num2;
      printf("the answer to that is %.2f\nYour Welcome\n", answer);
  } else if(operation == '-') {
      answer = (float)num1 - num2;
      printf("the answer to that is %.2f\nYour Welcome\n", answer);
  } else if(operation == '*') {
      answer = (float)num1 * num2;
      printf("the answer to that is %.2f\nYour Welcome\n", answer);
  } else if(operation == '/') {
      if(num2 != 0) {
        answer = (float)num1 / num2;
        printf("the answer to that is %.2f\nYour Welcome\n", answer);
    } else {
      printf("Error: you can't devide by 0, it is Undefined.\n");
    }
  } else {
      printf("That is not an operation I allow, I allow '+, -, *, /'\n");
  }
  return 0;
}
