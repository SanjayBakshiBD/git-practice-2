#include<stdio.h>
int main()
{
    char array[100];
    int i;

    gets(array);

    for(i=0; array[i] != '\0'; i++)
    {
        if((array[i] >='A') &&(array[i] <= 'Z'))
        {
            printf("%c", array[i]);
        }
        else if((array[i] >='a') &&(array[i] <= 'z'))
        {
            char x = (char)((int)array[i] - 32);
            printf("%c", x);
        }
        else
        {
            printf("%c", array[i]);
        }

    }
    printf("\n");

    return 0;
}
