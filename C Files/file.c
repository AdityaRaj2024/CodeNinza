#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("info.txt","r");
    if(fp==NULL)
    printf("This file is not available");
    else
    {
        while((ch=getc(fp))!=EOF)
        {
            putch(ch);

        }
    }
    fclose(fp);

}