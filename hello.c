#include<stdio.h>

int main()
{
    int number = 5;

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d", number, i, (number * i));
    }
    return 0;
}
