# include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

class SinglyLL
{
private:
    struct node* First;
    int iCount = 0;

public:
    SinglyLL();
    

    void Display();
    int Count();

   void InsertFirst(int No);
   void InsertLast(int No);
   void InsertAtPos(int No, int iPos);

   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int iPos);

};

SinglyLL :: SinglyLL()
{
    cout << "Inside Constructor" << endl;
    First = NULL;
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{
    struct node* temp = First;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " |->" ;
        temp = temp -> next;
    }
    cout << "NULL";
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of nodes in Linked List
// Input        : PNODE
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SinglyLL :: Count()
{
    return iCount;
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: InsertFirst(int No)
{
    struct node* newn = NULL;

    newn = new node;

    newn -> data = No;
    newn -> next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertLast(int No)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    newn = new node;

    newn -> data = No;
    newn -> next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        temp = newn;

        
    }
    iCount++;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertAtPos(int No, int iPos)
{
    
   struct node *newn = NULL;
    int i = 0;
    struct node *temp;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        newn = new node;
        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
   
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteFirst
// Discription  : Used to delete node at First position of Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst()
{
    struct node* temp = NULL;

    if (First == NULL)
    {
        cout << "Linked List is empty" << endl;
    }
    else if (First->next == NULL)
    {
        delete(First);
        First = NULL;

    }
    
    else
    {
        temp = First;
        First = First->next;
        delete(temp);
    }
    iCount--;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteLast
// Discription  : Used to delete node at last position of Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast()
{
    struct node* temp = NULL;

    if (First == NULL)
    {
        cout << "Linked List is empty" << endl;
    }
    else if (First->next == NULL)
    {
        delete(First);
        First = NULL;

    }
    
    else
    {
        temp = First;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    iCount--;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node *temp1;
    struct node *temp2;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid position\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);
        
        iCount--;
    }
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Main
// Discription  : Entry point function
// Input        : Null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL *sobj = new SinglyLL();
    int iRet = 0;

    sobj->InsertFirst(51);
    sobj->InsertFirst(21);
    sobj->InsertFirst(11);

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;

    sobj->InsertLast(101);
    sobj->InsertLast(121);
    sobj->InsertLast(151);

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;

    sobj->InsertAtPos(89,4);

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;

    sobj->DeleteFirst();

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;

    sobj->DeleteLast();

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;

     sobj->DeleteAtPos(4);

    sobj->Display();
    iRet = sobj->Count();
    cout << "\nNumber of nodes are: " << iRet << endl;
}
