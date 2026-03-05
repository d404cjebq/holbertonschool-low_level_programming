#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n = 612852475143;
    long long largest = -1;
    long long i;

    /* نقسم على 2 أول */
    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    /* نجرب الأعداد الفردية */
    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    /* إذا باقي عدد أكبر من 1 فهو أولي */
    if (n > 1)
        largest = n;

    printf("%lld\n", largest);
    return (0);
}
