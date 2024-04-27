// 22. Write a program to count the number of characters, number of words in the string and to check whether the given string is palindrome or not.
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        string str;
        int i,c;
        void inp()
        {
            cout<<"Enter A Sentence = ";
            getline(cin,str);
        }
    public:
        void show()
        {
            c=1;
            inp();
            cout<<"Sentence = "<<str<<endl;
            cout<<"Number of characters = "<<str.length()<<endl;
            for(i=0;str[i]!='\0';i++);
            cout<<"Number of characters = "<<i<<endl;
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]==' '&& str[i+1]!=' ')
                    c++;
            }
            cout<<"Number of Words = "<<c<<endl;
            for(i=0;str[i]!='\0';i++)
            {
                
            }
        }
};
int main()
{
    String st;
    st.show();
    return 0;
}