#include <stdio.h>
int main(void)
{
    int a = 8, b = 9;
    int res;

    res = a + b;
    printf("%d + %d = %d\n", a, b, res);
    res = a - b;
    printf("%d - %d = %d\n", a, b, res);
    res = a * b;
    printf("%d * %d = %d\n", a, b, res);

    return 0;
}