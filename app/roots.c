#include <stdio.h>
#include <math.h>
#include "roots.h"

roots* radical(double a, double b, double c)
{
    static roots ptr;

    double D = b*b - 4*a*c;

    if (D == 0)
    {
       ptr.x1 = -b/(2*a);
       ptr.count = 1;
    }

    if (D > 0)
    {
       ptr.x1 = (-b + sqrt(D)) / (2*a);
       ptr.x2 = (-b - sqrt(D)) / (2*a);
       ptr.count = 2;
    }

    if (D < 0)
    {
        ptr.count = 0;
    }

    if (a == 0)
        ptr.error = 1;

    return &ptr;
}
