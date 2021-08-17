//SIZE OF AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int dq[]={1,2,3,4,5};
    int size = sizeof(dq);
    cout<<size;
    return 0;
}

//FUNCTION ARRAY
#include<iostream>
using namespace std;

void PrintAge(int age[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<age[i]<<" ";
    }
}
int main()
{
    int age[5]={11,12,13,14,15};
    PrintAge(age,5);
    return 0;
}

//LINEAR SEARCH
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i;
    int n,key;
    cout<<"Size of array you want"<<endl;
    cin>>n;
    cout<<"Input :";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array :";
    for( i=0;i<n;i++)
    {
         cout<<a[i]<<",";
    }
    cout<<"\n Enter the number youn want to search:"<<endl;
    cin>>key;
    for ( i=0;i<=n-1;i++)
    {
        if(a[i]==key)
        {
            cout<<key<<" Found  at index :"<<i<<endl;
            break;
        }
    }
        if(i==n)
        {
            cout<<"Element not found";
        }
   return 0;
}

//MAX AND MIN IN ARRAY
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[100];
    int i;
    int n;
    cout<<"Size of array you want"<<endl;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array"<<endl;
    for( i=0;i<n;i++)
    {
         cout<<a[i]<<",";
    }

    int largest =INT_MIN;
    int smallest =INT_MAX;

    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest =a[i];
        }
    }
    cout<<"Largest No.: "<<largest<<endl;
    cout<<"Smallest No.: "<<smallest<<endl;
    return 0;
}

//BINARY SEARCH
#include<iostream>
#include<climits>
using namespace std;

int binary_search(int a[],int n,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid =(s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]>key)
        {
            e=mid-1;
        }
        else{
         s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;

    int a[100];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Enter the number you want to search"<<endl;
    cin>>key;

    cout<<binary_search(a,n,key)<<endl;
}
