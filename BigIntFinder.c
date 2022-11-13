#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter the first number:\n");
    scanf("%d",&a);
    printf("Please enter the second number:\n");
    scanf("%d",&b);
    printf("Please enter the third number:\n");
    scanf("%d",&c);
    printf("a = %d\tb = %d\tc = %d\n", a, b, c);

    if(a>b)
{
    if(a>c)
    {
        printf("A=%d is the biggest number!",a);
    }
    else
    {
        printf("C=%d is the biggest number!",c);
    }
}
else if(b>c)
{
    printf("B=%d is the biggest number!",b);
}
else
{
    printf("C=%d is the biggest number!",c);
}

    return 0;
}
