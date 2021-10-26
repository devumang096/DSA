//sort and reverse function
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {5,2,4};

    sort(arr,arr+3);
    reverse(arr,arr+3);
        for(auto a:arr)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    return 0;
}

//string array sorting
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    string str[] = {"Apple","Hat","Car","Banana"};
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    sort(str,str+4);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
}

//Finding elements in string
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str = "Hello World, testing test  string";

    string strToFind = "test";

   //cout<<string::npos;

    size_t index = str.find(strToFind);
    cout<<index;
     cout<<endl;

     index = str.find(strToFind , index+1);
     cout<<index;
     cout<<endl;
     for(int i=index; i<index + strToFind.length(); i++)
     {
         cout<<str[i];
     }
    cout<<endl;

     index = str.find(strToFind , index+1);
     cout<<index;
     cout<<endl;
    return 0;
}

//string comparison
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool stringCompare(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return s1.length()>s2.length();
    }
    else{
        return s1<s2;
    }
}
int main()
{
    string str[]={"akhil","umang","vishal","tiya","varun","somya"};

    sort(str,str+6,stringCompare);
    for(auto ele:str)
    {
        cout<<ele<<" ";
    }
   return 0;
}
