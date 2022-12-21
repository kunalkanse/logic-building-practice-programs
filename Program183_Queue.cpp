
/* 

This program demonstrate the implementation of the Queue in C++.

This program contains following functions : 

Enqueue() , Dequeue() , Display() , Count()

*/

// Enqueue() is similar as insertLast()
// Dequeue() is similar as deleteFirst()
 

/*
void Enqueue(int);
void Dequeue();

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

class Queue
{
    private:
        PNODE first;
        PNODE last;
        int size;

    public:

        Queue();
        void Enqueue(int);
        void Dequeue();

        void Display();
        int Count();

};

//////////////////////////////////////////////////////
///////////////////////////////////////////////////////

Queue :: Queue()
{
    first = NULL;
    last = NULL;
    size = 0;
}

void Queue :: Display()
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

int Queue :: Count()
{
    return size;
}

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

void Queue :: Enqueue(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    size++;
}

////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

void Queue :: Dequeue()
{
    PNODE temp = first;

    if((first==NULL) && (last==NULL))
    {
        return;
    }

    if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete temp;
    }

    size--;
    
}

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

int main()
{
    Queue obj;
    int iRet = 0;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);

    cout<<endl;

    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of Queue is : "<<iRet<<"\n"<<endl; 
    
    obj.Dequeue();
    obj.Dequeue();  
    
    cout<<endl;

    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of Queue is : "<<iRet<<"\n"; 

    cout<<endl;

    obj.Enqueue(501);
    
    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of Queue is : "<<iRet<<"\n"; 

    obj.Dequeue();  
    
    cout<<endl;

    obj.Display(); 
    iRet = obj.Count();
    
    cout<<"\nSize of Queue is : "<<iRet<<"\n"; 


    return 0;
}
