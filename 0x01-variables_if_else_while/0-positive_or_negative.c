#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
*Return: Always 0 (Success/Correct)
*\

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n= =0)
{
printf("%: is zero\n", n);
}
else if (n<0)
{
printf("%: is negative\n", n);
}
else
{
printf("%: is positive\n", n);
}
Return(0);
}