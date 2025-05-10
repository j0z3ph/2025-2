/**
 * @file factos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Tirando factos !
 * @version 0.1
 * @date 2025-05-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int facto(int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return n * facto(n - 1);
    return 0;
}

int main()
{
    size_t arr[100000000];
    printf("%d\n", facto(5));

    return 0;
}
