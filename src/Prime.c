///@file Prime.c

#include "Prime_header.h"

/**
* Function to find whether a number is prime or not
* @param[in] Number
* @return True : if the number is prime, False: if the number is not a prime
*/

int prime(int num)
{
    int flag = 0;
    for (int value = 2; value <= num / 2; ++value) {

        // condition for non-prime
        if (num % value == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        return NEITHER_PRIME_NOR_COMPOSITE;
    }
    else {
        if (flag == 0)
            return TRUE;
        else
            return FALSE;
    }

}

