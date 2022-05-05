#include <stdio.h>
#include <math.h>
#include "circle.h"

int circle(int R)
{
    printf("Введите радиус окружности:");
    
    scanf("%d", &R);
    
    float Pi = 3.14;
    float P = 2*Pi*R;
    float S = (Pi * (R * R));
    int D = R * 2;
    
    printf("Площадь окружности = %f\n", S);
    
    printf("Периметр окружности = %f\n", P);
    
    printf("Диаметр окружности = %d\n", D);
    
    return 0;
}
