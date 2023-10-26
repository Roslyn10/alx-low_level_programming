#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int binary = 0;
    int i;
    

    if (b == NULL)
    {
        return 0;
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            binary <<= 1;
        }
        else if (b[i] == '1')
        {
            binary <<= 1;
            binary |= 1;
        }
        else
        {
            return 0;
        }
    }

    return binary;
}
