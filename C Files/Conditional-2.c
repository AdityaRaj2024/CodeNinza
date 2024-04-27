#include<stdio.h>
void main()
{
  //Day Number
 /*int d;
 printf("Enter Day Number= ");
 scanf("%d",&d);
 switch(d)
 {
  case 1:
      printf("Sunday");
      break;
  case 2:
      printf("Monday");
      break;
  case 3:
      printf("Tuesday");
      break;
  case 4:
      printf("Wednesday");
      break;
  case 5:
      printf("Thursday");
      break;
  case 6:
      printf("Friday");
      break;
  case 7:
      printf("Saturday");
      break;
  default:
    printf("Invalid Day Number");
 } */
 //For Month Number
 {
    int m,y;
    printf("\nEnter Month Number And Year= ");
    scanf("%d%d",&m,&y);
    switch(m)
    {
      case 1:
      // printf("January");
      case 3:
       //printf("March");
      case 5:
       //printf("May");
      case 7:
       //printf("July");
      case 8:
       //printf("August");
      case 10:
       //printf("October");
      case 12:
       //printf("December");
      printf("31 Days");
      break;
      case 4:
        //printf("April");
      case 6:
        //printf("June");
      case 9:
        //printf("September");
      case 11:
        //printf("November");
        printf("30 Days");
        break;
      case 2:
        if ((y%4==0 && y%100!=0)|| (y%400==0))
        printf("29 Days");
        else
        printf("28 Days");
      break;
      default:
        printf("Invalid");
    }
 }
}
