//DYNAMIC ARRAY
#include<iostream>
using namespace std;

int main()
{
    int *array1;
    array1 = new int[13];

    for(int i=0; i<13; i++)
    {
        array1[i] = i+1;
    }

    int *array2;
    array2 = new int[31];

    for(int i=0;i<31;i++)
    {
        array2[i] = array1[i];
    }
    for(int i=13;i<31;i++)
    {
        array2[i] = i+1;
    }

    delete []array1;
    array1=array2;
    array2=NULL;

    //for(int i=0; i<13; i++)
    //{
      //  cout<<array1[i]<<"-->";
    //}
    cout<<endl;
    for(int i=0; i<31; i++)
    {
        cout<<array1[i]<<"-->";
    }
    return 0;
}

//ABSTRACT DATATYPE
#include<iostream>
using namespace std;

class Array
{
    private:
        int *array;
        int size;
        int filled;
    public:
        Array()
        {
            size=13;
            array = new int [size];
            for(int i=0;i<size;i++)
            {
                array[i] = i+1;
            }
            filled=5;
        }
        Array(int size)
        {
            this->size = size;
            array = new int [size];
            filled = 0;
        }
    void printElement()
    {
        for(int i=0;i<filled;i++)//i<size ,then it will give extra zeros which we dont want to allocate memory
        {
            cout<<array[i]<<"--";
        }
     cout<<endl;
    }
};
int main()
{
   Array *array1;
   array1 = new Array();
   
   array1->printElement();
   return 0;
}
