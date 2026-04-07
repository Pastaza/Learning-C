#include <stdio.h>

int main(){
  /*
     The printf statement will print whats in the brakets.
     Use a ";" after each statement.
     The "\n" is a new line character for just printf statements in terminal add "\n" at the end so the terminal line goes under the last print not beside it.
  */
  printf("Hello World!\n");
  printf("This is new!\n");
  // "return 0;" will exit the code (Not needed but good practice)
  
  /* 
     A variable is a resuable container( It acts as if it were what it contains ).
     int = intiger (can only be a whole numbers)
     int [name of variable] = [value];
     When printing you do
        int age = 14;
        printf("you are %d years old", age);
     %d(%decimal) is representing age in this print statement so you do ", age" to tell it that is what you want there

     float = floating point number (Number with decimal only 6 places)
     float [name of variable] = [value];
     When printing you do
        float price = 2.99;
        printf("The price of that is %f", price);
     %f(%floating point) is representing the price in this print statement so you do ", age" to tell it that is what you want there
     Then you can do
        printf("the price of that is $%.2f", price)
     The %.2f tells it how many decimals we want so if I did "%.1f" it would show only on decimal place

     double = double number (with double you can store 15 digits in the decimal place)
     double [name of variable] = [value];
     When printing you do 
        double pi = 3.14159265358979;
        printf("Pi is equal to %.15lf", pi);
    %lf(%long float) is representing pi in this print statement so you do ", pi" to tell it that is what you want there

    char = character (Single letter)
    char [name of variable] = '[value]';
    When ptinting you do
        char grade = 'A';
        printf("Your grade is %c", grade);
    %c(%character) is representing grade in this print statement so you do ", grade" to tell it that is what you want there

    How to do strings / multiple character
    char [name of variable]'[]' = "[value]";
    When printing you do 
        char name[] = "Pastaza";
        printf("Hello, %s", name);
    %s(%string) is representing name in this print statement so you do ", name" to tell it that is what you want

    bool = boolean / true or fales
    to use bool you need to include this header
    #include <stdbool.h>
    bool [name of variable] = [true or false];
    when printing you do
        bool isOnline = false;
        printf("Is pastaza online %d", isOnline);
    This would print "Is pastaza online 0" it would print "0" because 0 = false and 1 = true when using a boolean
    %d($boolean) is representing isOnline in this print statement sp you do ", isOnline" to tell it that is what you want
  */

  /*
    Format specifiers
    Format specifiers are special tokens that begin with a "%" symbol followed by a character that specifies the data type and optional modifiers (width, precision, flags)
    they control how data is displayed or interpreted.
  */
  return 0;
}
