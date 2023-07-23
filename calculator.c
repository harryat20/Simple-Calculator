#include<stdio.h>
int main()
{
    int n;
    float div,a,b,sum,diff,prod;
    printf("Enter the value of a and b : \n");
    scanf("%f%f",&a,&b);
    printf("Press any of the following options : \n");
    printf(" 1- To ADD\n 2- To SUBSTRACT\n 3- To MULTIPLY\n 4- To DIVIDE\n ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        sum = a+b;
        printf("%f + %f = %f",a,b,sum);
        break;

        case 2:
        diff = a-b;
        printf("%f - %f = %f",a,b,diff);
        break;

        case 3:
        prod = a * b;
        printf("%f * %f = %f",a,b,prod);
        break;

        case 4:
        div = a / b;
        printf("%f / %f = %f",a,b,div);

        default:
        printf("Enter an appropriate option ");
    }
    return 0;
}