// #include<iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int c = a;
//     a=b;
//     b=c;
// }
// int main()
// {
//     int a=5,b=10;
//     cout<<"Before Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     swap(a,b);
//     cout<<"After Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     return 0;
// }

//pass by reference
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int c = a;
//     a=b;
//     b=c;
// }
// int main()
// {
//     int a=5,b=10;
//     cout<<"Before Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     swap(a,b);
//     cout<<"After Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     return 0;
// }

//pass by address
// #include<iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int c = *a;
//     *a=*b;
//     *b=c;
// }
// int main()
// {
//     int a=5,b=10;
//     cout<<"Before Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     swap(&a,&b);
//     cout<<"After Swapping = "<<endl<<"a :- "<<a<<endl<<"b:- "<<b<<endl;
//     return 0;
// }