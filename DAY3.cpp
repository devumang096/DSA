//MEMORIZATION
#include<iostream>
#include<limits.h>
using namespace std;

int memory[1000];
int memoryFibonacci(int n)
{
    if(n<=1)
    {
        memory[n]=n;
        return n;
    }
    else 
    {
        if(memory[n-1] == -1)
        {
            memory[n-1] = memoryFibonacci(n-1);
        }
        if(memory[n-2] == -1)
        {
            memory[n-2] = memoryFibonacci(n-2);
        }
        memory[n] = memory[n-1] + memory[n-2];
        return memory[n];
    }
}
int main()
{
    for(int i=0;i<1000;i++)
    {
        memory[i]= -1;
    }
    cout<<memoryFibonacci(10);
}

//TOWER OF HANOI
#include<iostream>
using namespace std;

void tower(int n,char a,char b,char c)
{
    if(n>0)
    {
        tower(n-1,a,c,b);
        cout<<"Move from "<<a<<" to "<<c<<endl;
        tower(n-1,b,a,c);
    }
    else{
        return ;
    }
}
int main()
{
    tower(12,'A','B','C');
    return 0;
}

//

