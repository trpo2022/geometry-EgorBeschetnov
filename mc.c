#include <stdio.h>
void circle()
{
    int x,y,R;
    float Pi = 3.14;
    
    printf("Введите координаты центра окружности:");
    
    scanf("%d %d",&x,&y );
    
    printf("Введите радиус окружности:");
    
    scanf("%d",&R );
    
    float S = (Pi * (R * R));
    
    float P = 2*Pi*R;
    
    printf("Площадь окружности = %f\n", S);
    
    printf("Периметр окружности = %f\n", P);
    
    printf("Центр окружности расположен в точке (%d,%d)\n", x,y);
    
}

int main()
{
    circle();
    
    return 0;
}
