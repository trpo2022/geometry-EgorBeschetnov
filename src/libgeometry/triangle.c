#include <stdio.h>
#include <math.h>
#include "triangle.h"

int triangle(int Ax, int Ay,int Bx, int By, int Cx, int Cy)
{
    printf("Введите координаты первой точки:");

    scanf("%d %d", &Ax, &Ay);
    
    printf("Введите координаты второй точки:");

    scanf("%d %d", &Bx, &By);
    
    printf("Введите координаты третьей точки:");

    scanf("%d %d", &Cx, &Cy);
    
    int a,b,c;
    float H, S, Per;
    a = sqrt(((Bx - Ax) * (Bx - Ax)) + ((By - Ay) * (By - Ay)));
    
    b = sqrt(((Cx - Bx) * (Cx - Bx)) + ((Cy - By) * (Cy - By)));
    
    c = sqrt(((Cx - Ax) * (Cx - Ax)) + ((Cy - Ay) * (Cy - Ay)));
    
    int p = (a + b + c) / 2;
    
    S = sqrt(p*(p - a)*(p - b)*(p - c));
    
    Per = a + b + c;
    
    H = (2 * sqrt(p*(p - a)*(p - b)*(p - c))) / a;
    
    printf("Площадь треугольника = %f\n", S);
    
    printf("Периметр треугольника = %f\n", Per);
    
    printf("Высота треугольника = %f\n", H);
    
    return 0;
}
