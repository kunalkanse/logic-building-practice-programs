
// Program demonatrate insertion in BST & searching of element
// withot FLAG

#include <iostream>
using namespace std;

// Structure decleration
typedef struct node
{
    int data;
    struct node *lChild;
    struct node *rChild;

} NODE, *PNODE, **PPNODE;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void insert(PPNODE Head, int no)
{
    PNODE newn = new NODE;
    PNODE temp = *Head; // new node

    newn->data = no;
    newn->lChild = NULL;
    newn->rChild = NULL;

    if (*Head == NULL) // if tree is empty
    {
        *Head = newn;
    }
    else
    {
        while (1) // uncondition loop , while(true) , for( ; ; )
        {
            if ((temp->data) == no)
            {
                cout << "Duplication Data\n";

                delete newn; // if duplicate , Deallocate
                break;
            }
            else if (no < (temp->data)) // if Data is small
            {
                if ((temp->lChild) == NULL)
                {
                    temp->lChild = newn;
                    break;
                }

                temp = temp->lChild;
            }
            else if (no > (temp->data)) // if Data is large
            {
                if (temp->rChild == NULL)
                {
                    temp->rChild = newn;
                    break;
                }

                temp = temp->rChild;
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

bool search(PNODE Head , int no)
{

    if(Head == NULL)    // if treee is empty
    {
        return false;
    }
    else    // tree contains atleast one node
    {
        while(Head != NULL) // while(1) not works if data is not present
        {
            if((Head->data) == no)
            {
                break;
            }
            else if(no < (Head->data))  // if Data is small
            {
                Head = Head->lChild;
            }
            else if(no > (Head->data))  // if Data is large
            {
                Head = Head->rChild;
            }
        }

        if(Head == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
int main()
{
    PNODE first = NULL;
    int no = 0;
    bool bRet = false;
 
    insert(&first, 51);
    insert(&first, 21);
    insert(&first, 101);
    insert(&first, 75);
    insert(&first, 36);
    insert(&first, 62);

    cout<<"Enter number to search : ";
    cin>>no;

    bRet = search(first , no);

    if(bRet == true)
    {
        cout<<"\nElement is present\n";
    }
    else
    {
        cout<<"\nElement is not present\n";
    }


    return 0;
}
