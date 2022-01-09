#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class stacklinklist
{
private:
    node *temp,*top;
public:
    stacklinklist()
    {
        top=temp=NULL;
    }

void push()
{
    if (top==NULL)
    {
        top= new node;
        cout<<"Enter Elements: ";
        cin>>top->data;
        top->next=NULL;
        return;
    }
    temp=new node;
    cout<<"Enter Element: ";
    cin>>temp->data;
    temp->next=top;
    top=temp;
    
}
void pop()
{
    if (top==NULL)
    {
        cout<<"Under flow: ";
        return;
    }
    temp=top;
    top=top->next;
    delete temp;
    temp=NULL;
}
void print()
{
    
    while(top!=NULL)
    {
        cout<<top->data;
        pop();
    }
}
};

int main()
{
    stacklinklist obj;
    int i;
    cout<<"Options :  1=Push , 2=Pop , 3=Print "<<endl;;
    cin>>i;
    while (i!=4)
    {
        if (i==1)
        {
            obj.push();
        }
        if (i==2)
        {
            obj.pop();
        }
        if (i==3)
        {
            obj.print();
        }
        cout<<"option: 1=Push , 2=Pop , 3=Print "<<endl;
        cin>>i;
    }
    
    
}


