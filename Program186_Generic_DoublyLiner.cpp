
// GENERIC DOUBLY Linear Linked List
// MENU DRIVEN

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//------------------------------------------------------------------
// structure decleration
//-------------------------------------------------------------------
////////////////////////////////////////////////////////////////////

template <class T>
struct node
{
    T data;
    struct node * next;
    struct node * prev;

};

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
// class decleration
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
class DoublyLL
{
    private:
        node<T> * first;
        int size;

    public:
        DoublyLL();

        void insertFirst(T);
        void insertLast(T);
        void insertAtPos(T , int);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int);

        void Display();
        int Count();
};

///////////////////////////////////////////////////////////////////
//----------------------------------------------------------------
// function definations 
//----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
DoublyLL<T> :: DoublyLL()
{
    first = NULL;
    size = 0;
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: insertFirst(T data)
{
    node<T> * newn = new node<T>;

    newn->data = data;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        first->prev = newn;
        newn->next = first;
        first = newn;
    }

    size++;
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: insertLast(T data)
{
    node<T> * newn = new node<T>;
    node<T> * temp = first;

    newn->data = data;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    size++;
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: insertAtPos(T data , int pos)
{
    if((pos<1) || (pos>(size+1)))
    {
        cout<<"invalid position";
        return;
    }

    if(pos == 1)
    {
        insertFirst(data);
    }
    else if(pos == (size+1))
    {
        insertLast(data);
    } 
    else
    {
        node<T> * newn = new node<T>;

        newn->data = data;
        newn->next = NULL;
        newn->prev = NULL;

        node<T> * temp = first;
        
        for(int iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        size++;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: deleteFirst()
{
    if(first != NULL)
    {
        if((first->next) == NULL)
        {
            delete first;
            first = NULL;
        }
        else
        {
            first = first->next;
            delete first->prev;
            first->prev = NULL;
        }

        size--;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: deleteLast()
{
    if(first != NULL)
    {
        if((first->next) == NULL)
        {
            delete first;
            first = NULL;
        }
        else
        {
            node<T> * temp = first;

            while((temp->next) != NULL)
            {
                temp = temp->next;
            }

            temp->prev->next = NULL;
            delete temp;
        }

        size--;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: deleteAtPos(int pos)
{
    if((pos<1) || (pos>size))
    {
        cout<<"invalid position";
        return;
    }

    if(pos == 1)
    {
        deleteFirst();
    }
    else if(pos == size)
    {
        deleteLast();
    } 
    else
    {
        node<T> * temp = first;
        
        for(int iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        size--;
    }
}
///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void DoublyLL<T> :: Display()
{
    node<T> * temp = first;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
int DoublyLL<T> :: Count()
{
    return size;
}

//////////////////////////////////////////////////////////////////////
//-------------------------------------------------------------------
// main function
//-------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////

int main()
{
    DoublyLL <int>obj1;
    DoublyLL <char>obj2;

    int iRet = 0;

    cout<<"List of Integers : \n";
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();

    iRet = obj1.Count();
    cout << "Number of elemensts are : " << iRet << "\n";

    ////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////

    cout<<endl;

    cout<<"List of Characters : \n";
    obj2.InsertFirst('N');
    obj2.InsertFirst('U');
    obj2.InsertFirst('K');

    obj2.InsertLast('A');
    obj2.InsertLast('L');

    obj2.Display();

    iRet = obj2.Count();
    cout << "Number of elemensts are : " << iRet << "\n";

    return 0;
    
}
