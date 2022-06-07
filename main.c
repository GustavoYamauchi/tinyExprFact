#include "tinyexpr.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    const char *c = "10!";
    double r = te_interp(c, 0);
    printf("%f\n", c, r);
    return 0;
}