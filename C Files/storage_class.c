/*
     ******   STORAGE CLASSES      *******

    Stroge Classes of the variable defines the following things
     --> Memory location
     --> Default value
     --> Scope
     --> Life time

    1. Memory Allocation :- Where the variable will be created or declared.
    2. Default value :- What will be the default value of that variable.
    3. Scope :- Visibility of the variable. i.e. Program(Global) / block / Local(Function) scope.
    4. Life time :- Life time of that variable.


    There are four types storage class:-
        --> automatic (auto)
        --> register (register)
        --> static (static)
            :- It preserve the previous value.
            :- It can be declared only one time in a program.
        --> external (extern)

    Declaration or syntax of storage classes:-

        storage_class  datatype  variable_name;

        eg:- auto int x;

    STORAGE CLASS           KEYWORDS            DEFAULT VALUE      MEMORY LOCATION        SCOPE        LIFE TIME
    *************************************************************************************************************

    Automatic               auto                garbage value      RAM(MM)                LOCAL        Within the block / function
    
    Static                  static              0                  RAM(MM)                LOCAL        throughout the program

    Register                register            garbage value      CPU Register           LOCAL        Within the block / function

    External                extern              0                  RAM(MM)                LOCAL        throughout the directory


*/

/*#include<stdio.h>
void increament();
int main()

{
    auto int x;
    static int y;
    register int z;
    printf("%d\n%d\n%d\n",x,y,z);

    increament();
    increament();
    increament();

    /*extern int x;
    printf("x=%d\n",x);
    increament();
    return 0;
}
int x=200;

void increament()
{
    static int a=0;
    printf("a=%d\n",a);
    a=a+1;
    printf("%d",x);
}*/

void xyz()
{
    static int sum =0;
    sum+=10;
    printf("Sum = %d\n",sum);
}
void main()
{
    xyz();
    xyz();
    xyz();
    xyz();
    xyz();
}