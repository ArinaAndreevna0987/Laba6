#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    //1
	setlocale(LC_ALL, "RUS");
    int yeas;
    printf("������� ���: ");
    if (scanf_s("%d", &yeas) != 1) {
        printf("������ �����\n");
        return 1;
    }
    int rem = yeas % 4; 
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("��� %d ����������\n", yeas);
    }
    else {
        printf("��� %d �� ����������\n", yeas);
    }

    //2
    double x, F;
    printf("������� �������� x: ");
    if (scanf_s("%lf", &x) != 1) {
        printf("������ �����\n");
        return 1;
    }
    F = (x <= 7) ? (-3 * x + 9) : (1 / (x - 7));
    printf("F(%.2f) = %.2f (%s)\n",
        x,
        (x <= 7) ? (-3 * x + 9) : (1 / (x - 7)),
        (x <= 7) ? "������������ ��������� -3x+9" : "������������ ��������� 1/(x-7)");

    //3
    double a, b;
    printf("������� ��� ��������� ����� ����� ������ ��� ������� ������: ");
    if (scanf_s("%lf %lf", &a, &b) != 2) {
        printf("������ �����.\n");
        return 1;
    }

    if (a == b) {
        printf("����� ������ ���� ����������.\n");
        return 1;
    }

    double bigger = (a > b) ? a : b;
    double smaller = (a > b) ? b : a;

    double square_bigger = bigger * bigger; 
    double cube_smaller = smaller * smaller * smaller; 

    double result = square_bigger - cube_smaller;

    printf("������� �����: %g\n", bigger);
    printf("������� �����: %g\n", smaller);
    printf("������� ��������: %g\n", square_bigger);
    printf("��� ��������: %g\n", cube_smaller);
    printf("��������� (������� �������� - ��� ��������): %g\n", result);

  
}