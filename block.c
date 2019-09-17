#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    if (argc > 1)
    {
        if (argc < 3)
        {
            printf("ERROR: there should be 0 or 2 arguments!");
            return 1;
        }
        
        x = atoi(argv[1]);
        y = atoi(argv[2]);
    }
    else scanf("%d%d", &x, &y);

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
