#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    if (argc > 1)
    {
        if (argc < 2)
        {
            printf("ERROR: there should be 0 or 1 arguments!");
            return 1;
        }
        
        x = atoi(argv[1]);
    }
    else scanf("%d", &x);

    for (int i = x; i > 0; --i) {
        for (int j = x - i; j > 0; --j)
            printf(" ");

        for (int j = i; j > 0; ) {
            printf("*");
            if (--j > 0)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
