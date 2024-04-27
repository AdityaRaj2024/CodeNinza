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

//wap in c to input rollno,name,course & marks of 3 subjects after that write these records in bimary file.
/*#include<stdio.h>
struct student
{
    int rollno,m1,m2,m3;
    char nm[20],cs[20];
};
void main()
{
    struct student s;
    FILE *fp;
    char choice;
    fp=fopen("student.bin","ab");
    do
    {
        printf("Enter rollno,name,course & marks of three subject :\n");
        scanf("%d%s%s%d%d%d",&s.rollno,s.nm,s.cs,&s.m1,&s.m2,&s.m3);
        fwrite(&s,sizeof(s),1,fp);
        fflush(stdin);
        printf("Do you want to continue this operation [press y/n]");
        
        scanf("%c",&choice);
    } while(choice=='Y' || choice=='y');
    fclose(fp);
}*/

//wap in c to read all records of a student from a binary file.
#include<stdio.h>
struct student
{
    int rollno,m1,m2,m3;
    char nm[20],cs[20];
};
void main()
{
    struct student s;
    FILE *fp;
    fp=fopen("student.bin","rb");
    //fseek(fp,0,2);
    //rewind(fp);
    if(fp==NULL)
        printf("File is not available");
    else
    {
        printf("RollNo.\tName\tCourse\tJava\tC++\tPHP\n");
        while(fread(&s,sizeof(s),1,fp)==1)
            printf("%d\t%s\t%s\t%d\t%d\t%d\n",s.rollno,s.nm,s.cs,s.m1,s.m2,s.m3);
    }
    fclose(fp);
}