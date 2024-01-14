#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

char *int_to_string(int num)
{
    static char str[12];
    int i = 0;

    if (num < 0) {
        str[i++] = '-';
        num = -num;
    }

    int digits = (int)log10(num) + 1;
    for (int j = digits - 1; j >= 0; j--) {
        str[i++] = (num / (int)pow(10, j)) % 10 + '0';
    }
    str[i] = '\0';
    return (str);
}

bool is_palindrome(char *string)
{
    int rolling_sum = 0, i = 0, j = strlen(string) - 1;

    for (; i < j; i++, j--)
    {
        if (string[i] == string[j])
            continue;
        else
            return (false);
    }
    return (true);
}

void *palindrome_calc(void)
{
    int a = 1, b = 1, res, max_palindrome = 0;
    char *string_pal;

    while (a <= 999)
    {
        b = 1;
        while (b <= 999)
        {
            res = a * b;
            string_pal = int_to_string(res);
            if (is_palindrome(string_pal) && res > max_palindrome)
                max_palindrome = res;
            b++;
        }
        a++;
    }
    printf("%s\n%d\n%d\n", string_pal, res, max_palindrome);
}

int main(void)
{
    palindrome_calc();
}
