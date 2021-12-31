#include <stdio.h>
void main()
{
    float cel, fah;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9; //if cel to fah --> fah= ((cel*9)/5)+32
    ("Celsius = %f", cel);
}