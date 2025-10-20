#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    //1
	setlocale(LC_ALL, "RUS");
    int yeas;
    printf("Введите год: ");
    if (scanf_s("%d", &yeas) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }
    int rem = yeas % 4; 
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("год %d високосный\n", yeas);
    }
    else {
        printf("год %d не високосный\n", yeas);
    }

    //2
    double x, F;
    printf("Введите значение x: ");
    if (scanf_s("%lf", &x) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }
    F = (x <= 7) ? (-3 * x + 9) : (1 / (x - 7));
    printf("F(%.2f) = %.2f (%s)\n",
        x,
        (x <= 7) ? (-3 * x + 9) : (1 / (x - 7)),
        (x <= 7) ? "использовано выражение -3x+9" : "использовано выражение 1/(x-7)");

    //3
    double a, b;
    printf("Введите два различных числа через пробел или перевод строки: ");
    if (scanf_s("%lf %lf", &a, &b) != 2) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    if (a == b) {
        printf("Числа должны быть различными.\n");
        return 1;
    }

    double bigger = (a > b) ? a : b;
    double smaller = (a > b) ? b : a;

    double square_bigger = bigger * bigger; 
    double cube_smaller = smaller * smaller * smaller; 

    double result = square_bigger - cube_smaller;

    printf("Большее число: %g\n", bigger);
    printf("Меньшее число: %g\n", smaller);
    printf("Квадрат большего: %g\n", square_bigger);
    printf("Куб меньшего: %g\n", cube_smaller);
    printf("Результат (квадрат большего - куб меньшего): %g\n", result);

  
}