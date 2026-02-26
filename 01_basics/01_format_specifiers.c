#include <stdio.h>

int main() {

    //types of variables

    int age = 22;
    float gpa = 3.5;
    double pi = 3.141592653589793;
    char letter = 'P';
    char word[] = "Hello" ;

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%lf\n", pi);
    printf("%c\n", letter);
    printf("%s\n", word);

    //////////////////////

    printf("\n");
    printf("\n");

    //modifier practice

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1);
    printf("%d\n", num2);   //regular output
    printf("%d\n", num3);

    printf("%4d\n", num1);
    printf("%4d\n", num2);   //width specified output. whitespace in front.
    printf("%4d\n", num3);

    printf("%-4d\n", num1);
    printf("%-4d\n", num2);   //negative width. left aligned. whitespace after.
    printf("%-4d\n", num3);

    printf("%0d\n", num1);
    printf("%0d\n", num2);   //whitespaces substitute with zero
    printf("%0d\n", num3);

    int num4 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);   //signed output
    printf("%+d\n", num4);

    float price1 = 49.99;
    float price2 = 1.50;
    float price3 = -500.00;

    printf("%f\n", price1);
    printf("%f\n", price2);     //regular output with 6 digits after decimal point
    printf("%f\n", price3);

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);     //output with 2 digits after decimal point
    printf("%.2f\n", price3);

    printf("%.1f\n", price1);
    printf("%.1f\n", price2);     //  .1  rounds the output
    printf("%.1f\n", price3);

    printf("%+-10.2f\n", price1);    
    printf("%+-10.2f\n", price2);     //output formatted with other modifiers
    printf("%+-10.2f\n", price3);
}