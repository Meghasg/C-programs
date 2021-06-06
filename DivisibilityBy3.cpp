#include <stdio.h>
main()
{
    int i;
    printf(" First 100 numbers in reverse which are divisible by 3 are :");
    for (i=100; i>=1; i--)
        {
               if (i%3==0)
                  printf(" %d", i);
        }  
}