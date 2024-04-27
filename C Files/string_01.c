#include <stdio.h>
#include<string.h>
void main()
{
    /*char str[20];
    printf("Enter String = ");
    scanf("%[^\n]",str);
    //scanf("%s",str);
    printf("String  Is  %s",str);*/

    //character by character assigning in string
    /*char str[10];
    str[0]='R';
    str[1]='O';
    str[2]='H';
    str[3]='I';
    str[4]='T';
    printf("%s",str);*/

    //chcaracter by character accessing of string
    /*char str[7]={"Aditya"};
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c\t",str[i]);
    }*/

    /*char str[10];
    int i;
    printf("Enter String = ");
    gets(str);
    printf("All Character's Are =\n");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c\t",str[i]);
    }*/

    // char str[15];
    // char ch;
    // int i=0;
    // while (ch=getche())!='$'
    // {
    //     str[i]=ch;
    //     i++;
    // }
    // str[i]='\0';
    // printf("\nString = %s",str);

    /*char str[20];
    puts("Enter String = ");
    gets(str);
    puts("Sring Is =");
    puts(str);*/

    //print each character of string
    /*char str[25];
    int  i;
    printf("Enter Any String = ");
    scanf("%[^\n]",str);
    printf("All Characters Are = \n");
    for(i=0;str[i]!='\0';i++)
        printf("%c\t",str[i]);*/


    //Length Of String
    /*char str[25];
    int i;
    puts("Enter String = ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
        printf("Total Character = %d",i);*/

    /*char str[25];
    int i,c=0;
    puts("Enter String = ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    printf("Length Of String is %d",c);*/

    //To Count Vowels
    /*char str[35];
    int i,v=0;
    puts("Enter String");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        switch(str[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            v++;
            break;
        }
    }
    printf("Total Vowels = %d",v);*/

    //TO Count,Vowels and sapces
    /*char str[35];
    int i,v=0,c=0,sp=0;
    puts("Enter String");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        switch(str[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            v++;
            break;
            case ' ':
            sp++;
            break;
            default :
            c++;
        }
    }
    pchrintf("Total Vowels = %d\nConsonents =%d\nSpaces =%d",v,c,sp);*/

    //to count upper alphabet,lower alphabet digits and special characters
    /*char str[35],ch;
    int i,u=0,l=0,d=0,s=0;
    puts("Enter String");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        ch=str[i];
        if(ch>='A' && ch<=90)
            u++;
        else if(ch>='a' && ch<='z')
            l++;
        else if(ch>='0' && ch<='9')
            d++;
        else
            s++;
    }
    printf("Total Upper Character's Are = %d\nTotal Lower Character's Are = %d\n",u,l);
    printf("Total Digit's Are = %d\nTotal Special Character's Are = %d",d,s);*/


}
