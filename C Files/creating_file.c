#include <stdio.h>
int main()

{
    // // --------------------------wap to write information in the file-------------------

    // FILE *fp ;
    // char ch,characters;
    // int num=0;
    // fp=fopen("biodata.txt","w");  // if file is not created then it will create "w"
    // printf("enter your details-----(to close the program press ctrl+c )\n");

    // while ((ch==getchar()) != EOF )
    // {
    //     putc(ch,fp);
    // }
    // while ( characters)
    // fclose(fp);

//---------------------------- wap to copy the content of the file --------------------------------
/*    char ch;
    FILE *fp1 , *fp2;
    fp1= fopen("biodata.txt","r");
    fp2= fopen("newfile.txt","w");
    if(fp1==NULL)
        printf("File is Not Available");
    else
    {
        while ((ch= getc(fp1))!=EOF)
        {
            putc(ch,fp2);  //write in another file
        }
        printf("File Copied");
    }
    fclose(fp1);
    fclose(fp2); */
// ------------------Wap to remove all white spaces.--------------------------------------
//  char ch;
//     FILE *fp1 , *fp2;
//     fp1= fopen("biodata.txt","r");
//     fp2= fopen("newfile.txt","w");
//     if(fp1==NULL)
//         printf("File is Not Available");
//     else
//     {
//         while ((ch= getc(fp1))!=EOF)
//         {
//             if(ch==' ' || ch=='\n' || ch=='\t')
//                 continue;
//         putc(ch,fp2);
//         }
//         printf("File Copied");
//     }
//     fclose(fp1);
//     fclose(fp2);

//----------------- wap to count the number of upper and lower alphabet and digits and special character------------
// FILE *fp;
// char ch;
// int small=0,capital=0,digit=0,special=0;
// fp=fopen("biodata.txt","r");
// if(fp==NULL)
//  printf("File not found");
//  else 
//  {
//      while ((ch==getc(fp)) != EOF)
//      {
//         if (ch>=65 &&ch<=90)
//           capital++;
//         else if (ch>=97 &&ch<=122)
//           small++ ;
//         else if (ch>=0 &&ch<=9)
//           digit++;
//         else
//           special++;

           
//      }
//      printf("Upper case = %d",capital);
//      printf("\nLower case= %d",small);
//      printf("\nDigits=%d",digit);
//     printf("\nSpecial Characters=%d",special);

//      fclose(fp);
//  }

 // ---------------wap to in c to capitalise the the character of the sentence---------------

//FILE *fp;
//char ch;
//fp=fopen("mytext.txt","w");
//while((ch=getchar()) != EOF)
//{
//    putc(ch,fp);
//}
//fclose(fp);
//
//
//
//

return 0;
}
