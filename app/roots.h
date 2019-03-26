#ifndef ROOTS_H
#define ROOTS_H

typedef struct
{
    double x1;
    double x2;
    int count;
    int error;
} roots;
roots* radical(double a, double b,double c);

#endif // ROOTS_H
