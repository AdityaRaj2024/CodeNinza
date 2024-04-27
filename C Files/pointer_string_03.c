#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
void main()
{
    char *str;
    char ch;
    int i, flag = 0;
    str = (char *)malloc(sizeof(char) * 20);
    // printf("Enter Any character = ");
    // scanf("%c",&ch);
    printf("Enter Any String = ");
    scanf("%s", str);
    fflush(stdin);
    printf("Enter Any character =");
    scanf("%c",&ch);
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i)==ch)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%c is found.", ch);
    else
        printf("%c is not found.", ch);
}
