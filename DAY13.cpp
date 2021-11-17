#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int info;
    node *left,*right;
};
node *root=NULL,*loc,*par;
void find(int item,node *root);
void insert();
void traversal(node *root);

int main()
{
    int k;
    do{
        cout<<endl<<"----------1-------Insertion";
        cout<<endl<<"----------2-------Traversal";
        cout<<endl<<"----------3-------Find";
        cout<<endl<<"----------4-------Exit";
        cout<<endl<<endl;
        cout<<"Enter your choice";
        cin>>k;
        switch(k)
        {
            case 1:
            insert();
            break;

            case 2:
            traversal(root);
            break;

            case 3:
            cout<<"Enter data";
            int x;
            cin>>x;
            find(x,root);
            break;

            case 4:
            return 0;

            default:
            cout<<"Wrong choice,Try again!";

        }
    }
    while(k!=4);
    return 0;
}

void find(int item,node *root)
{
    node *ptr,*save;
    if(root==NULL)
    {
        loc=NULL;
        par=NULL;
        return;
    }
    else if(item==root->info)
    {
        loc=root;
        par=NULL;
        cout<<"Data is found and location is"<<loc;
        return;
    }
    else
    {
        if(item<root->info)
        {
            ptr=root->left;
            save=root;
        }
        else
        {
            ptr=root->right;
            save=root;
        }
        while(ptr!=NULL)
        {
            if(item=ptr->info)
            {
                loc=ptr;
                par=save;
                cout<<"Data is found and location is"<<loc;
                return;
            }
            else
            {
                if(item<ptr->info)
                {
                    save=ptr;
                    ptr=ptr->left;
                }
                else
                {
                    save=ptr;
                    ptr=ptr->right;
                }
            }
        }
    }
    loc=NULL;
    par=save;
    if(loc=NULL)
    {
        cout<<"Data is not found";
    }
}

void insert()
{
    node *newnode;
    int item;
    cout<<"Enter the item";
    cin>>item;
    find(item,root);
    if(loc!=NULL)
    {
        cout<<endl<<"Item already present";
        return;
    }
    else
    {
        newnode=new node;
        newnode->info=item;
        newnode->left=NULL;
        newnode->right=NULL;
        if(par=NULL)
        {
            root=newnode;
        }
        else if(item<par->info)
        {
            par->left=newnode;
        }
        else
        {
            par->right=newnode;
        }
    }
}

void traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<"     "<<root->info;
        traversal(root->left);
        traversal(root->right);
    }
}