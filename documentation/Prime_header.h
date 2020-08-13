/**
* @file Prime_header.h
*
*/

#include <stdio.h>
#include <string.h>

/// TRUE defines the number is prime
#define TRUE 1
/// FALSE defines the number is not a prime
#define FALSE 0
/// NEITHER_PRIME_NOR_COMPOSITE defines the number is 1
#define NEITHER_PRIME_NOR_COMPOSITE 2

/**
* Checks whether a number is prime or not
* @param[in] number 
* @return True of False
* @note Returns 2 if number is 1
*/

int prime(int num);

