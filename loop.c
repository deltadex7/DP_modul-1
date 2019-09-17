#include <stdio.h>
#define MILLION_MASTER 1000000

int main(int argc, char const *argv[])
{
    int n = 0;
    while (n < 10)
    {
        printf("[%d] PING!\n", n);
        ++n;
    }

    do
    {
        printf("[%d] PING!\n", n);
        ++n;
    } while (n < 10);
    
    for (int i = 0; i < 10; ++i)
    {
        printf("i = %d\n", i);
        if (i == 7) break;
    }
      
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 4) continue;
        for (int j = 3; j > 0; --j)
        {
            printf("%d:%d\n", i, j);
        }
    }
    
    // while (MILLION_MASTER)
    // {
    //     printf("M");
    // }
    
    
    return 0;
}
