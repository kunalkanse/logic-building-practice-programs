
/* 

This program demonstrate the implementation of the SINGLY CIRCULAR Linked List in C++.

This program contains following functions : 
insertFirst() , insertLast() , Display() , count() , deleteFirst() , deleteLast() ,insertAtPos() , deleteAtPos()

*/


/*
void insertFirst(int no)
void insertLast(int no)
void insertAtPos(int no , int pos)

void deleteFirst();
void deleteLast();
void deleteAtPos(int pos);

void Display();

int Count();
*/

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;

}NODE , * PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int size;

    public:

        SinglyCL()
        {
            first = NULL;
            last = NULL;
            size = 0;
        }

        void Display()
        {
            if((first == NULL) && (last == NULL))
            {
                return;
            }

            PNODE temp = first;

            do
            {
                cout<<"|"<<temp->data<<"|->";
                temp = temp->next;
            } while (temp != (last->next));

            cout<<"NULL"<<endl;
            
        }

        int Count()
        {
            return size;
        }

        void insertFirst(int no)
        {
            PNODE newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if((first == NULL) && (last == NULL))
            {
                first = newn;
                last = newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            }

            last->next = first;
            size++;
        }

        void insertLast(int no)
        {
            PNODE newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if((first == NULL) && (last == NULL))
            {
                first = newn;
                last = newn;
            }
            else
            {
                last->next = newn;
                last = newn;
            }

            last->next = first;
            size++;
        }

        void insertAtPos(int pos , int no)
        {
            if((pos < 1) || (pos > (size+1)))
            {
                cout<<"Invalid position"<<endl;
                return;
            }

            if(pos == 1)
            {
                insertFirst(no);
            }
            else if(pos == (size+1))
            {
                insertLast(no);
            }
            else
            {
                PNODE newn = new NODE;

                newn->data = no;
                newn->next = NULL;

                PNODE temp = first;

                for(int iCnt = 1; iCnt < pos-1 ; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                size++;
            }
        }

        void deleteFirst()
        {
            if((first==NULL) && (last==NULL))
            {
                return;
            }
            else if(first == last)
            {
                delete first;    
                first = NULL;
                last = NULL;
            }
            else
            {
                first = first->next;
                delete last->next;
                last->next = first;
            }

            size--;
        }

        void deleteLast()
        {
            if((first==NULL) && (last==NULL))
            {
                return;
            }
            else if(first == last)
            {
                delete first;
                first = NULL;
                last = NULL;
            }
            else
            {
                PNODE temp = first;

                while((temp->next) != last)
                {
                    temp = temp->next;
                }

                delete last;
                last = temp;
                last->next = first;
            }

            size--;
            
        }

        void deleteAtPos(int pos)
        {
            if((pos < 1) || (pos > size))
            {
                cout<<"Invalid position"<<endl;
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
                PNODE temp = first;
                PNODE targeted = NULL;

                for(int iCnt = 1; iCnt < pos-1 ; iCnt++)
                {
                    temp = temp->next;
                }

                targeted = temp->next;
                temp->next = targeted->next;

                delete targeted;

                size--;
            }
        }

};

int main()
{
    SinglyCL sobj;
    int iRet = 0;

    sobj.insertFirst(51);
    sobj.insertFirst(21);
    sobj.insertFirst(11);

    sobj.insertLast(101);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Count is : "<<iRet<<endl;

    cout<<endl;

    sobj.insertAtPos(3 , 501);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Count is : "<<iRet<<endl;

    cout<<endl;

    sobj.deleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Count is : "<<iRet<<endl;

    cout<<endl;

    sobj.deleteLast();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Count is : "<<iRet<<endl;

    cout<<endl;

    sobj.deleteAtPos(2);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Count is : "<<iRet<<endl;

    return 0;
}

