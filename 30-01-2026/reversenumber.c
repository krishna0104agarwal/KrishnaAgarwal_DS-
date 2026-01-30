#include <stdio.h>
int num(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
int main()
{
    printf("%d\n", num(765));
}