#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    
    // level passing
    if (n > 10)
    {
        printf("Next level!\n");
    }

    // check negativity
    if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Non-negative\n");
    }

    // alternate if-else
    printf((n < 0)? "Negative\n": "Non-negative\n");

    // integer range: positive/negative/zero
    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    
     

    return 0;
}
