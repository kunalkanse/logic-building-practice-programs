
// implementation of Singly Linear Linked List

class Node
{
    public int data;
    public Node next; //self referencial class
}

class SinglyLL
{
    private Node first;
    private int size;

    public SinglyLL()
    {
        this.first = null;
        this.size = 0;
    }

    public void InsertFirst(int no)
    {
        // Node newn = null;
        Node newn = new Node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        this.size++;
    }

    public void InsertLast(int no)
    {
        // Node newn = null;
        Node newn = new Node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            Node temp = first;

            while((temp.next) != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }

        this.size++;
    }

    public void DeleteFirst()
    {   
        // in java there is no free , delete.
        // java has garbage collector
        if(size == 0)
        {
            return;
        }

        if(size == 1)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }

        this.size--;
    }

    public void DeleteLast()
    {
        // in java there is no free , delete.
        // java has garbage collector
        if(size == 0)
        {
            return;
        }

        if(size == 1)
        {
            first = null;
        }
        else
        {
            Node temp = first;

            while((temp.next.next) != null)
            {
                temp = temp.next;
            }
            temp.next = null;

        }

        this.size--;
    }

    public void InsertAtPos(int pos, int no)
    {
        if((pos < 0) || (pos > size))
        {
            System.out.println("Invalid Position");
            return;
        } 

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp = first;

            Node newn = new Node();
            newn.data = no;
            newn.next = null;

            for(int i = 1; i < pos-1 ; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            this.size++;
        }
    }

    public void DeleteAtPos(int pos)
    {
        if((pos < 0) || (pos > size))
        {
            System.out.println("Invalid Position");
            return;
        } 

        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == size)
        {
            DeleteLast();
        }
        else
        {
            Node temp = first;

            for(int i = 1; i < pos-1 ; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

            this.size--;
        }
    }

    public void Display()
    {
        Node temp = first;

        System.out.println("Elements from linked list : ");
        while(temp != null)
        {
            System.out.print("|" + temp.data + "|" + " -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
    }

    public int Count()
    {
        return this.size;
    }
}


public class Program216_LinkedList 
{
    public static void main(String[] args) 
    {
        SinglyLL sobj = new SinglyLL();
        int size = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(151);

        System.out.println();
        sobj.Display();

        size = sobj.Count();
        System.out.println("Count of Elements : " + size);

        sobj.DeleteFirst();
        sobj.DeleteLast();

        System.out.println();
        sobj.Display();

        size = sobj.Count();
        System.out.println("Count of Elements : " + size);

        sobj.DeleteAtPos(2);

        System.out.println();
        sobj.Display();

        size = sobj.Count();
        System.out.println("Count of Elements : " + size);

        sobj.InsertAtPos(2 , 51);

        System.out.println();
        sobj.Display();

        size = sobj.Count();
        System.out.println("Count of Elements : " + size);
    }

}
