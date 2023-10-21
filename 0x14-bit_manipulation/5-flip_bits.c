#include "main.h"

/**
 * flip_bits - Calculates the number of bits
 * needed to flip from one number to another.
 * @num1: The first unsigned long integer.
 * @num2: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped to get from num1 to num2.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int xor_result = num1 ^ num2;
	unsigned int bit_difference = 0;

	while (xor_result > 0)
	{
		bit_difference += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_difference);
}
