//selfmadesort and rotate function
#include<iostream>
#include<algorithm>
using namespace std;

bool selfMadesort(int n1,int n2)
{
    return n1>n2;
}
int main()
{
    int arr[]={17,1,2,3,6,2,96,354,6,34};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,selfMadesort);
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    rotate(arr,arr+n-2,arr+n);
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}

//nested function 
#include<iostream>
using namespace std;
bool fun1(int n1,int n2)
{
    cout<<"hello, i am fun1";
    return n1>n2;
}

int fun2(bool (&umang)(int n1 ,int n2))
{
    cout<<"hello, i am fun2";
    int n1 = 15;
    int n2 = 17;

    if(umang(n1, n2))
    {
        return 5;
    }
    else{
        return 15;
    }
}
int main()
{
    cout<<fun2(fun1())<<endl;
    return 0;
}