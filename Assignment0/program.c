#include <stdio.h>

int main()
{
    int no = 930;
    int sum = 0;
    
    while (no > 0)
    {
        sum = sum + (no % 10);
        no = no / 10;
}
    printf("Sum of digits 930= %d", sum);

    return 0;
}
