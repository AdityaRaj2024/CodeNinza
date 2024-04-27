//WAP in C++ to create a class as named Book to input book_id, book_name, author name and price during compile time and run time using respectively default and parameterized constructor, after that print all records.
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    char id[6],name[10],author[15];
    float price;
    public :
        Book()
        {
            cout<<"Enter Book ID, Book Name, Author Name and Book Price = "<<endl;
            cin>>id>>name>>author>>price;
        }
        Book(char id[6], char name[10],char author[15], float price)
        {
            strcpy(this->id,id);
            strcpy(this->name,name);
            strcpy(this->author,author);
            this->price=price;
        }
        ~Book()
        {
            cout<<"Book Id :- "<<id<<endl<<"Book Name :- "<<name<<endl<<"Author Name :- "<<author<<"\nBook Cost :- "<<price<<endl;
        }
};

int main()
{
    Book obj1;
    Book obj2("1454","C++","Yashwant",345.74);
    return 0;
}