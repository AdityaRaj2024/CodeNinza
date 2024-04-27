#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    //Electricity Bill
    /*int pr,cr,tu;
    float ch;
    cout<<"Enter Previous Reading :- ";
    cin>>pr;
    cout<<"Enter Current Reading :- ";
    cin>>cr;
    if(cr>pr)
    {
        tu=cr-pr;
        cout<<"Total unit = "<<tu;
        if(tu<=100)
        {
            ch=tu*3.5;
        }
        else if (tu>100 && tu<=200)
        {
            ch=100*3.5+(tu-100)*4;
        }
        else if (tu>200 && tu<=300)
        {
            ch=100*3.5+100*4+(tu-200)*4.5;
        }
        else if (tu>300 && tu<=500)
        {
            ch=100*3.5+100*4+100*4.5+(tu-300)*5;
        }
        else
        {
            ch=100*3.5+100*4+100*4.5+200*5+(tu-500)*6;
        }
        cout<<"\nTotal Cost = "<<ch;
    }
   else
   {
    cout<<"Invalid Entry";
   }*/

    //Discount Bill
    /*float amt,dis,py_amt;
    cout<<"Enter purchase Amount = ";
    cin>>amt;
    if(amt>=1000 && amt<2000)
        dis=amt/100*5;
    else if(amt>=2000 && amt<3000)
        dis=amt/100*10;
    else if(amt>=3000 && amt<3500)
        dis=amt/100*15;
    else if(amt>=3500 && amt<5000)
        dis=amt/100*20;
    else if(amt>=5000)
        dis=amt/100*25;
    else
        dis=amt/100*0;
    cout<<"Discount = "<<dis;
    py_amt=amt-dis;
    cout<<"\nPayable Amount = "<<py_amt;*/
   return 0;
}