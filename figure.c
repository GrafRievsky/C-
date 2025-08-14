#include <stdio.h>
#include <math.h>

struct Quan{
    float a; // сторона 1
    float b; //сторона 2
    float c; 
    float sin;
    float Perimeter; //периметр
    float space; //площадь
    float h; //высота
};

void squera(){ //квадрат
struct Quan Squera;

printf("- > - > ");
scanf("%f", &Squera.a);

Squera.Perimeter = 4 * Squera.a;
Squera.space = pow(Squera.a, 2);

printf("Периметр квадрата = %.2f \n", Squera.Perimeter);
printf("Площадь квадрата: %.2f\n", Squera.space);
}


void rectangle(){ //прямоугольник
    struct Quan Rectangle;
    
    printf("a = ");
    scanf("%f", &Rectangle.a);

    printf("b = ");
    scanf("%f", &Rectangle.b);

    Rectangle.Perimeter = (Rectangle.a + Rectangle.b) * 2;
    Rectangle.space = Rectangle.a * Rectangle.b;

    printf("Периметр прямоугольника  = %.2f \n", Rectangle.Perimeter);
    printf("Площадь прямоугольника  = %.2f \n", Rectangle.space);

}


void triangle(){ //треугольник
    struct Quan Triangle;

    printf("a = ");
    scanf("%f", &Triangle.a);

    printf("b = ");
    scanf("%f", &Triangle.b);

    printf("c = ");
    scanf("%f", &Triangle.c);

    if (Triangle.b > 0 && Triangle.c > 0 && Triangle.a > 0){
        Triangle.Perimeter = Triangle.a + Triangle.b + Triangle.c;
        printf("Периметр треугольника = %.2f \n", Triangle.Perimeter);
    }
    
    else if ((Triangle.a <= 0) || (Triangle.c <=0) || (Triangle.b <= 0)){
        if (Triangle.c <= 0 && Triangle.b <= 0){
            printf("h = ");
            scanf("%f", &Triangle.h);

            Triangle.space = Triangle.a * Triangle.h * 0.5;
            printf("Площадь треугольника = %.2f \n", Triangle.space);

        }
        else if(Triangle.a <= 0 && Triangle.b<=0 ){
            printf("h = ");
            scanf("%f", &Triangle.h);

        Triangle.space = Triangle.c * Triangle.h * 0.5;
        printf("Площадь треугольника = %.2f \n", Triangle.space);
        }
        else if(Triangle.c <=0 && Triangle.a <= 0){
            printf("h = ");
            scanf("%f", &Triangle.h);
            
            Triangle.space = Triangle.b * Triangle.h * 0.5;
            printf("Площадь треугольника = %.2f \n", Triangle.space);
        }
        
        else {
            if (Triangle.c <= 0){
                printf("sin@ = ");
                scanf("%f", &Triangle.sin);

            Triangle.space = Triangle.a * Triangle.b * Triangle.sin * 0.5;
            printf("Площадь треугольника = %.2f \n", Triangle.space);
        }
        else if(Triangle.a <= 0){
            printf("sin@ = ");
            scanf("%f", &Triangle.sin);
            Triangle.space = Triangle.c * Triangle.b *Triangle.sin * 0.5;
            printf("Площадь треугольника = %.2f \n", Triangle.space);
        }
        else if(Triangle.b <= 0){
            printf("sin@ = ");
            scanf("%f", &Triangle.sin);
            Triangle.space = Triangle.c * Triangle.a * Triangle.sin * 0.5;
            printf("Площадь треугольника = %.2f \n", Triangle.space);
        }
    }}
}


void trapezoid(){
    struct Quan Trapezoid;
    
        printf("a = ");
        scanf("%f", &Trapezoid.a);

        printf("b = ");
        scanf("%f", &Trapezoid.b);

        printf("h = ");
        scanf("%f", &Trapezoid.h);
        
        Trapezoid.space = (Trapezoid.a + Trapezoid.b)/2 * Trapezoid.h;

        printf("Площадь трапеции = %.2f \n", Trapezoid.space);
    
    
}


int main()
{
    triangle();
}