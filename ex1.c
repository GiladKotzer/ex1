/******************
Name: Gilad Kotzer
ID: 331753509
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  
  int num, num1, num2, pos, res, res1, res2;

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  res = (num & (1 << pos)) >> pos;
  printf("The bit in pos %d of number %d is: %d\n", pos, num, res);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  res1 = num | (1 << pos);
  printf("Number with bit %d set to 1: %d\n", pos, res1);
  res2 = num & ~(1 << pos);
  printf("Number with bit %d set to 0: %d\n", pos, res2);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  res =  num ^ (1 << pos);
  printf("Number with bit %d toggled: %d\n", pos, res);
  
  //Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("Please enter a number: \n");
  scanf("%d", &num);
  res = (num & 1) ^ 1;
  printf("%d\n", res);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Please enter the fiest number (octal): \n");
  scanf("%o", &num1);
  printf("Please enter the second number (octal): \n");
  scanf("%o", &num2);
  res1 = num1 + num2;
  printf("The sum in hexsadecimal: %X\n", res1);
  res2 = ((res1 & (1 << 3)) >> 3) * 1000 + ((res1 & (1 << 5)) >> 5) * 100 + ((res1 & (1 << 7)) >> 7) * 10 + ((res1 & (1 << 11)) >> 11);
  printf("The 3,5,7,11 bits are: %d\n", res2);


  printf("Bye!\n");
  
  return 0;
}
