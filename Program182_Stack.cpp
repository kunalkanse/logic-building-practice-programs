
/* 

This program demonstrate the implementation of the Stack in C++.

This program contains following functions : 

Push() , Pop() , Display() , Count()

*/


/*
void Push(int);
void Pop();

void Display();

int Count();
*/


#include<iostream>
using namespace std;

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

typedef struct node
{
    int data;
    struct node * next;

}NODE , * PNODE;

/////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

class Stack
{
    private:
        PNODE first;
        int size;

    public:

        Stack();
        void Push(int);
        void Pop();

        void Display();
        int Count();

};

//////////////////////////////////////////////////////
///////////////////////////////////////////////////////

Stack :: Stack()
{
    first = NULL;
    size = 0;
}

void Stack :: Display()
{
    PNODE temp = first;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }

    cout<<"NULL";
}

////////////////////////////////////////////////////////
///////////////////////////////////////////////////////

int Stack :: Count()
{
    return size;
}

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

void Stack :: Push(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    size++;
}

////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

void Stack :: Pop()
{
    PNODE temp = first;

    if(temp != NULL)
    {
        first = first->next;

        delete temp;

        size--;
    }
    
}

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

int main()
{
    Stack obj;
    int iRet = 0;
    
    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    cout<<endl;

    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of stack is : "<<iRet<<"\n"<<endl; 
    
    obj.Pop();
    obj.Pop();  
    
    cout<<endl;

    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of stack is : "<<iRet<<"\n";  

    return 0;
}
