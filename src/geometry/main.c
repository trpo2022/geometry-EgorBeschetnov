#include <stdio.h>
#include "libgeometry/triangle.h"
#include "libgeometry/circle.h"


int main()
{
    int figure, R=0;
    int  Ax=0, Ay=0, Bx=0, By=0, Cx=0, Cy=0;
    
    printf("1.Окружность\n");
    
    printf("2.Треугольник\n");
    
    printf("Выберите, информацию о какой фигере вы хотите получить:");
    
    scanf("%d", &figure);
    
    
    switch(figure){
        case 1:
            circle(R);
            break;
        case 2:
            triangle(Ax, Ay, Bx, By, Cx, Cy);
            break;
    }
    
    return 0;
}
