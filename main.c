#include <stdio.h>

void displayOptions(void); //displayOptions prototype

int main(void) 
{
  //declare & initialize number input 1 & input 2
  int x = 0, y = 0;
  //declare & initialize final answer
  float answer = 0;
  //declare & initialize choice char
  char choice;
  
  //User chooses how they want to calculuate
  printf("Choose an option to calculuate:\n");
  //display options
  displayOptions();
  scanf("%c", &choice);

  //User inputs the numbers they want to calculate
  printf("Enter the first number you would like to use: ");
  scanf("%d", &x);
  printf("Enter the second number you would like to use: ");
  scanf("%d", &y);

  //Switch statement for whichever operation they choose
  switch(choice){
    case '+': //addition
      answer = x + y;
      printf("Your total is: %.1f\n", x , y, answer);
      break;
    case '-': //subtraction
      answer = x - y;
      printf("Your total is: %.1f\n", x , y, answer);
      break;
    case '*': //multiplication
      answer = x * y;
      printf("Your total is: %.1f\n", x , y, answer);
      break;
    case'/'://division
      answer = x / y;
      printf("Your total is: %.1f\n", x , y, answer);
      break;
  }
}
  
//displayOptions function
void displayOptions(void) //displays the operation menu 
{
  printf("+: Addition\n");
  printf("-: Subtraction\n");
  printf("*: Multiplication\n");
  printf("/: Division\n");
}
