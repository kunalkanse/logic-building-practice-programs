
// This program is implementation of Singly linear linked list in c++

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;

}NODE , * PNODE , ** PPNODE;

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

class SinglyLL
{
    private:
        PNODE first;
        int size;

    public:
        SinglyLL()
        {
            first = NULL;
            size = 0;
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void insertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;    // newn = (PNODE)malloc(sizeof(NODE))

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
        ////////////////////////////////////////////////////////

        void insertLast(int no)
        {
            PNODE temp = first;
            PNODE newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(temp == NULL)
            {
                temp = newn;
            }
            else
            {
                while((temp->next) != NULL)
                {
                    temp = temp->next;
                }

                temp->next = newn;
                size++;
            }

        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void deleteFirst()
        {
            PNODE temp = first;

            if(temp != NULL)
            {
                first = first->next;
                delete(temp);

                size--;
            }
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void deleteLast()
        {
            PNODE temp = first;

            if(first == NULL)
            {
                return;
            }
            else if((first->next) == NULL)  // if list contains only one node
            {
                delete(temp);
                first = NULL;

                size--;
            }
            else
            {
                while((temp->next->next) != NULL)
                {
                    temp = temp->next;
                }

                delete(temp->next);
                temp->next = NULL;

                size--;
            }
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void insertAtPos(int no , int pos)
        {
            PNODE temp = first;
            int iCnt = 0;

            if((pos < 1) || (pos > (size+1)))
            {
                cout<<"Invalid position";
                return;
            }
            

            if(pos == 1)
            {
                insertFirst(no);
            }
            else if(pos == size+1)
            {
                insertLast(no);
            }
            else
            {
                PNODE newn = new NODE;

                newn->data = no;
                newn->next = NULL;

                for(iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                size++;
            }
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void deleteAtPos(int pos)
        {
            PNODE temp = first;
            int iCnt = 0;

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
                PNODE targeted = NULL;

                for(iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
                {
                    temp = temp->next;
                }

                targeted = temp->next;
                temp->next = targeted->next;

                delete(targeted);

                size--;
            }
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////

        void Display()
        {
            PNODE temp = first;

            cout<<endl;
            while(temp != NULL)
            {
                cout<<"|"<<(temp->data)<<"|->";
                temp = temp->next;
            }

            cout<<"NULL"<<endl;
        }

        ////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////
        
        int Count()
        {
            return size;
        }
};

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;    // object created
    int iRet = 0; 

    sobj.insertFirst(51);
    sobj.insertFirst(21);
    sobj.insertFirst(11);

    sobj.insertLast(101);
    sobj.insertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"list contains "<<iRet<<" elements\n"<<endl;

    sobj.deleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"List contains "<<iRet<<" elements"<<endl;

    sobj.deleteLast();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"list contains "<<iRet<<" elements"<<endl;

    sobj.insertAtPos(501 , 3);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"list contains "<<iRet<<" elements"<<endl;

    sobj.deleteAtPos(3);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"list contains "<<iRet<<" elements"<<endl;

    return 0;
} 
