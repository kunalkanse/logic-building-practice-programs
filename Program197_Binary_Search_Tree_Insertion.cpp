
// Program demonatrate insertion in BST

#include<iostream>
using namespace std;

// Structure decleration
typedef struct node
{
    int data;
    struct node *lChild;
    struct node *rChild;

}NODE , *PNODE , **PPNODE;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void insert(PPNODE Head , int no)
{
    PNODE newn = new NODE;
    PNODE temp = *Head; // new node

    newn->data = no;
    newn->lChild = NULL;
    newn->rChild = NULL;

    if(*Head == NULL)   // if tree is empty
    {
        *Head = newn;
    }
    else
    {
        while(1)    // uncondition loop , while(true) , for( ; ; )
        {
            if(temp->data == no)
            {
                cout<<"Duplication Data\n";

                delete newn;    // if duplicate , Deallocate
                break;
            }
            else if(no < (temp->data))  // if Data is small
            {
                if((temp->lChild) == NULL)
                {
                    temp->lChild = newn;
                    break;
                }

                temp = temp->lChild;
            }
            else if(no > (temp->data))  // if Data is large
            {
                if(temp->rChild == NULL)
                {
                    temp->rChild = newn;
                    break;
                }

                temp = temp->rChild;
            }

        }
    }


}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
int main()
{
    PNODE first = NULL;

    insert(&first , 51);
    insert(&first , 21);
    insert(&first , 101);
    insert(&first , 75);
    insert(&first , 36);
    insert(&first , 62);

    return 0;
}
