#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sums num
 * @a: first num
 * @b: second num
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mod - Modulus of num
 * @a: num1
 * @b: num2
 * Return: Mod
 */

int op_mod(int a, int b)
{
	return (a % b);
}


/**
 * op_div - Quotients a and b
 * @a: num1
 * @b: num2
 * Return: Quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - multiplies nums
 * @a: num1
 * @b: num2
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - Subtraction
 * @a: num1
 * @b: num2
 * Return: Subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
