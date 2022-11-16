#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - computes sum of two integers
* @a: first integer
* @b: second integer
* Return: the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - computes the subtraction of two integers
* @a: first integer
* @b: second integer
* Return: the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbers
* @a: first number
* @b: second number
* Return: the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbers
* @a: first number
* @b: second number
* Return: the division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - computes the modulus of two numbers
* @a: first number
* @b: second number
* Return: the modulus
*/
int op_mod(int a, int b)
{
	return (a % b);
}
