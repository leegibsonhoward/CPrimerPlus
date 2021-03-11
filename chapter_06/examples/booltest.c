#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool status = true;
    int num = 0100;
    while (status)
    {
        printf("%c", num);
        status = false;
    }

    return 0;
}