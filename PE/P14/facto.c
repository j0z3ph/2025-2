/**
 * @file facto.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Tirando factos
 * @version 0.1
 * @date 2025-05-19
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return n * factorial(n - 1);
}

int main()
{
    printf("%i\n", factorial(5));

    return 0;
}
