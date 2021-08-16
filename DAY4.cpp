//REVERSE STRING
#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)//base case
    { 
        return ;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main()
{
    reverse("binod");
    return 0;
}

//PRINTING TILL N 
#include<iostream>
using namespace std;

void dec(int n)//decreasing order
{
    if(n==1){
        cout<<"1"<<endl;
       return ;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n)//increasing order
{
    if(n==1){
        cout<<"1"<<endl;
       return ;
    }
    inc(n-1);
    cout<<n<<endl;

}
int main()
{
   int n;
   cin>>n;
   cout<<"Decreasing Order"<<endl;
   dec(n);
   cout<<"Increasing Order"<<endl;
   inc(n);
   return 0;
}