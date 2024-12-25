#include <stdio.h>

int main()
{
    char x[30], y[30];
    int length, count = 0;
    printf("Enter a word = ");
    scanf("%s", x);
    for (length = 0; x[length] != '\0'; length++)
        ;

    for (int i = 0, j = length - 1; i < length; i++, j--)
        y[j] = x[i];

    for (int i = 0; i < length; i++)
        if (x[i] == y[i])
            count++;

    if (count == length)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}