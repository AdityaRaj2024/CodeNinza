/*#include<stdio.h>
int s;
void input()
{
    printf("Enter Size Of Array = ");
    scanf("%d",&s);
}
int greatest()
{
    int i,gt,a[s];
    printf("Enter %d Values =\n",s);
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++)
    {
        if(a[i]>gt)
            gt=a[i];
    }
    return(gt);
}

void main()
{
    input();
    printf("Greatest Number = %d",greatest());
}

/*#include<stdio.h>
int findadd()
{
int a,b,sum;
a=10;
b=20;
sum=a+b;
return(sum);
}
void main()
{
   // printf("Addition = %d",findadd());
    int rs;
    rs=findadd();
    printf("Addition = %d",rs);
}*/