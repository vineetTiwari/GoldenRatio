//
//  main.c
//  GoldenRatio
//
//  Created by Vineet Tiwari on 2015-05-06.
//  Copyright (c) 2015 vinny.co. All rights reserved.
//

#include <stdio.h>

// Part one!

int sum(int *x, int *y);

int main(int argc, const char * argv[]) {
  // insert code here...

  int number1 = 0;
  int number2 = 1;
  int newNumber = 0;
  int i = 2;
  int n = 6;
  while (i < n) {

    newNumber = sum(&number1, &number2);

    number1 = number2;
    number2 = newNumber;
    i++;

  }

  printf("%d", newNumber);
  return 0;
}

int sum(int *x, int *y) {

  int add;
  add = *x + *y;
  return add;
}

// Part 2!

int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber);

int main(int argc, const char * argv[]) {

  int n = 10;

  if (n < 2) {
    printf("The first Fibonacci number is 0.\n");
  } else {
    int remainingSteps = n-2;
    int previousNumber = 0;
    int previousPreviousNumber =1;

    int num = recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
    printf("%d\n", num);
  }

  return 0;
}

int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber) {
  int newNumber = previousNumber + previousPreviousNumber;
  if (remainingSteps == 0) {
    return newNumber;
  } else {
    previousPreviousNumber = previousNumber;
    previousNumber = newNumber;
    remainingSteps--;
    return recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
  }

}





