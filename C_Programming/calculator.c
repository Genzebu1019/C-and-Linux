#include <stdio.h>

int add(int firstNum, int secondNum) 
{
    int sum;

    sum = firstNum + secondNum;
    return sum;
}

int mult(int firstNum, int secondNum) 
{
    int product;

    product = firstNum * secondNum;
    return product;
}



int main() 
{
    printf("Add..\n");

    int sum = 0;
    int prod = 0;
    int numOne = 10;
    int numTwo = 10;

    sum = add(numOne, numTwo);
    printf("Sum of two numbers: %d\n", sum);

    
    prod = mult(numOne, numTwo);
    printf("Prod of two numbers: %d\n", prod);



    return 0;
}

