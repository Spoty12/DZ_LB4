#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

    setlocale(LC_ALL, "RUS");


    int A, B;

    printf("Введите числа A и B: ");
    scanf("%d %d", &A, &B);

    if ((A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0)) {
        printf("Налево\n");
    }
    else {
        printf("Не налево\n");
    }

    return 0;
}
