#include <stdio.h>
#include "roots.h"

int main(void)
{
    roots *result = radical(1, 1, 0);

    switch (result->error)
    {
        case 0: printf("Ошибок нет\n");
        goto roots;

        case 1: printf("Это не квадратное уравнение.\n");
        goto exit;

    default: printf("Ошибка выполнения"); break;
    }

roots: switch (result->count)
    {
        case 0: printf("Корней нет\n");
        break;

        case 1: printf(" 1 корень: X >> %f\n", result->x1);
        break;

        case 2: printf(" 2 корня  \nX1 >> %f \nX2 >> %f\n", result->x1, result->x2);
        break;

    default: printf("Ошибка выполнения"); break;
    }

exit:  return 0;
}
