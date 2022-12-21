
// Generic Singly Linear Linked List
// works for any datatype

// need to write " template <class T> " at every decleration & defination
// replace datatype by T

// we have to define datatype at the object creation of class

#include <iostream>
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
    struct node *next;
};


///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
// class decleration
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
private:
    node<T> * first;
    int size;

public:
    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

///////////////////////////////////////////////////////////////////
//----------------------------------------------------------------
// function definations 
//----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
SinglyLL<T>::SinglyLL()
{
    first = NULL;
    size = 0;
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    node<T> * newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
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

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    node<T> * newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        node<T> * temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    size++;
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int pos)
{
    if ((pos < 1) || (pos > (size + 1)))
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        insertFirst(no);
    }
    else if (pos == (size + 1))
    {
        insertLast(no);
    }
    else
    {
        node<T> * newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        node<T> * temp = first;

        for (int iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        size++;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    node<T> * temp = first;

    if (first != NULL)
    {
        first = first->next;
        delete temp;

        size--;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T> :: DeleteLast()
{
    node<T> * temp = first;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
        size--;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        size--;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
    if ((pos < 1) || (pos > size))
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == size)
    {
        DeleteLast();
    }
    else
    {
        node<T> * temp = first;
        node<T> * targeted = NULL;

        for (int iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        targeted = temp->next;
        temp->next = targeted->next;

        delete targeted;

        size--;
    }
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL<T>::Display()
{
    node<T> * temp = first;

    while (temp != NULL)
    {
        cout <<"|"<<temp->data <<"|->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

///////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------
///////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL<T>::Count()
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
    SinglyLL <int>obj1;
    SinglyLL <char>obj2;

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
