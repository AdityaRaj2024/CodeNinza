/*
1. getc()
2. putc()
    getc() = This function is used  to read one character from  a file
    syntax:-
        char getc(file_pointer);
        
    e.g:
        char ch;
        ch=getc(fp);
        
    putc():- This function is used to write one character in a file.
    syntax:-
        void putc (char value, file pointer );


  */
 // ------------------wap in c to write information about your self in the file
 /*#include <stdio.h>
 void main()
 {
 FILE *fp;
 char ch;
 fp=fopen("myinfo.txt","a"); // if file exists then information will get overwritten in "w" mode
 printf("Enter the information about yourself :-\n");
 while((ch=getchar())!=EOF) // to terminate the program press Enter + ctrl + c
    putc(ch,fp);
 fclose(fp);
 }*/

 // -----------wap in c to read information from a file
/*#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("myinfo.txt","r");
    if (fp==NULL)
        printf("File not found");
    else
    {
        while((ch=getc(fp))!= EOF)
            printf("%c",ch);
            //putch(ch);  
    }
    fclose(fp);
}*/
  
 //---------------------------- wap to copy the content of the file --------------------------------
    /*#include<stdio.h>
    void main()
    {
        char ch;
        FILE *fp1 , *fp2;
        // fp1= fopen("biodata.txt","r");
        fp1= fopen("myinfo.txt","r");
        fp2= fopen("newfile.txt","w");
        if(fp1==NULL)
            printf("File is Not Available");
        else
        {
            while ((ch= getc(fp1))!=EOF)
                putc(ch,fp2);  //write in another file
            printf("File Copied");
        }
        fclose(fp1);
        fclose(fp2); 
    }*/

    // ------------------Wap to remove all white spaces.--------------------------------------
    /*#include<stdio.h>
    void main()
    {
        char ch;
        FILE *fp1 , *fp2;
        //fp1= fopen("biodata.txt","r");
        fp1=fopen("myinfo.txt","r");
        fp2= fopen("newfile1.txt","w");
        if(fp1==NULL)
            printf("File is Not Available");
        else
        {
            while ((ch= getc(fp1))!=EOF)
            {
                if(ch==' ' || ch=='\n' || ch=='\t')
                    continue;
                putc(ch,fp2);
            }
            printf("File Copied");
        }
        fclose(fp1);
        fclose(fp2);
    }*/

    
//----------------- wap to count the number of upper and lower alphabet and digits and special character------------
/*#include<stdio.h>
void main()
    {
    FILE *fp;
    char ch;
    int l=0,u=0,d=0,s=0;
    //fp=fopen("biodata.txt","r");
    fp=fopen("myinfo.txt","r");
    if(fp==NULL)
        printf("File not found");
    else 
    {
        while ((ch=getc(fp)) != EOF)
        {
            if (ch>=65 &&ch<=90)
                u++;
            else if (ch>=97 &&ch<=122)
                l++ ;
            else if (ch>=0 &&ch<=9)
                d++;
            else
                s++;
        }
        printf("Upper case = %d\n",u);
        printf("Lower case= %d\n",l);
        printf("Digits=%d\n",d);
        printf("Special Characters=%d\n",s);
        fclose(fp);
    }
}*/

 // -----------Data file--------------
 /*
 fprintf():- this function is used to write formatted data in a file
    syntax
        void fprintf(filepointer,formatspecifier,variablesnames);

    e.g
        int rollno=10;
        char nm[30]="xyz";
        char cs[20]="BCA";
        float fee = 393039.30

        fprintf(fp,"%d\t%s\t%s\t%f",rollno,nm,cs,fee);

 fscanf():- this function is used to read formatted data from file
    syntax
        void fscanf(<file pointer>,"Formatted specifier",&<variable name>);
    
    e.g
        int rollno;
        char nm[20],cs[20];
        float fee;
        fscanf(fp,"%d%s%s%f",&rollno,nm,cs,&fee);
        
 */

//wap in c to input rollno,name,course and fee of more students from console after that write these records in a data file

/*#include<stdio.h>
void main()
{
    FILE *fp;
    int rollno;
    char nm[20],cs[20];
    float fee;
    char choice;
    fp=fopen("myrecord.dat","a");
    do
    {
        printf("Enter rollno,name,course & fee :\n");
        scanf("%d%s%s%f",&rollno,nm,cs,&fee);
        fprintf(fp,"%d\t%s\t%s\t%.2f\n",rollno,nm,cs,fee);
        printf("Do you want to continue this operation [press y/n]");
        fflush(stdin);
        scanf("%c",&choice);
    } while (choice=='Y' || choice=='y');
    fclose(fp);
}*/

//wap in c to read rollno,name,course and fee from file after that print on console

/*#include<stdio.h>
void main()
{
    FILE *fp;
    int rollno;
    char nm[20],cs[20];
    float fee;
    //char choice;
    fp=fopen("myrecord.dat","r");
    if(fp==NULL)
    printf("File is not available");
    else
    {
        printf("Rollno\tName\tCourse\tFee\n");
        while(fscanf(fp,"%d%s%s%f",&rollno,nm,cs,&fee) !=EOF)
            printf("%d\t%s\t%s\t%.2f\n",rollno,nm,cs,fee);
    }
    fclose(fp);
}*/

/*
    fwrite()
    fread()
    seek()
    ftell()
    remove()
    rename()
    rewind()

    fwrite() :- This function is used to write record in binary file with the help of structure.

    syn :-
        void fwrite(&<structure variable>,<size of structure>,<no. of records>,<file pointer>);

    e.g :-
        struct student
        {
            int rollno;
            char nm[20];
        };
        struct student s;
        fwrite(&s,sizeof(s),1,fp);
*/