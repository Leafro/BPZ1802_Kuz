#include <stdio.h>
#include <math.h>
extern double x, y;
void function()
{
    y = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
}