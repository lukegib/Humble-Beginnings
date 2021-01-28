#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void main()
{
    int number = 1;
    int i = 1;
    int answer;

    printf("Please enter your number: ");
    scanf_s("%d", &number);

    for (i = 1; i < 20; i++)
    {
        answer = i * number;
        printf("%d x %d = %d\n", number, i, answer);
    }
}
