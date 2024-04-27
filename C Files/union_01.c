#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[20];
    float fee;
};
void main()
{
    //accesing single element at a time
    union student s;
    s.rollno=10;
    printf("Roll No. = %d\n",s.rollno);
    printf("Memory Address = %u\n",&s.rollno);
    strcpy(s.name,"abc");
    printf("Name = %s\n",s.name);
    printf("Memory Address = %u\n",&s.name);
    s.fee=50000.46;
    printf("Fee = %.1f\n",s.fee);
    printf("Memory Address = %u\n",&s.fee);
    printf("Size of union = %d\n",sizeof(s));
    //accessing all element at a time
    /*union student s;
    s.rollno=10;
    strcpy(s.name,"abc");
    s.fee=34700.45;
    printf("Roll No. = %d\nName = %s\nFee = %.2f\n",s.rollno,s.name,s.fee);
    printf("Size of union = %d\n",sizeof(s));*/
}