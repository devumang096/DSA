//LENGTH OF STRING
#include<iostream>
using namespace std;
int main()
{
    string str="Hello World this is a string in c++";
    //HELLO WORLD

    int word=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
        {
            word++;
        }
    }
    if(str[0]!=' ')
    {
        word++;
    }
    else if(str[str.length()-1]==' ')
    {
        word--;
    }
    cout<<word<<endl;
}

//PASSWORD TESTING
#include<iostream>
using namespace std;
int main()
{
    string str="teststring12*3";
    int lower=0,upper=0,number=0,special=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
        else 
        {
            special++;
        }
    }

    if(lower&&upper&&number&&special)
    {
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }

   return 0;
}

//STRING COMPARISON
#include<iostream>
using namespace std;
int compare_string(string str1,string str2)
{
    for(int i1=0,i2=0; str1[i1]!='\0' && str2[i2]!='\0';i1++,i2++)
    {
        if(str1[i1]!=str2[i2])
        {
            if(str1[i1]>str2[i2])
            {
                return 1;
            }
            else 
            {
                return -1;
            }
        }
    }
    return 0;
}
int main()
{
    string str1="Painter";
    string str2="Painting";

    cout<<compare_string(str2,str1)<<endl;
}
