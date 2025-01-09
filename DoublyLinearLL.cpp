# include <iostream>
using namespace std;

struct node{

    int data;
    struct node* next;
    struct node* prev;
};

class DoublyLinearLL
{
private:
    struct node* First;
    int iCount;

public:
    DoublyLinearLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

};

DoublyLinearLL :: DoublyLinearLL()
{
    cout << "Inside constructor" << endl;
    First = NULL;
    iCount = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of nodes in Linked List
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DoublyLinearLL :: Count()
{
    return iCount;
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: Display()
{
    struct node* temp = NULL;
    temp = First;

    cout << "NULL<=>";
    while (temp != NULL)
    {
        cout << "| " << temp->data << " |<=>";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: InsertFirst(int No)
{
    struct node* newn = NULL;

    newn = new node;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First ->prev = newn;
        First = newn;
        
    }
    iCount++;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: InsertLast(int No)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    newn = new node;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
        
    }
    iCount++;
}
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: InsertAtPos(int No, int iPos)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    int i = 0;

    if ((iPos < 1) || (iPos > iCount+1))
    {
        cout << "Invalid Position" << endl;
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new node;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for ( i = 1; i < iPos-1; i++)
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
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: DeleteFirst()
{
    struct node* temp = NULL;

    if (First == NULL)
    {
        cout << "LinkList is emty" << endl;
        return;
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
// Input        : PPNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: DeleteLast()
{
    struct node* temp = NULL;

    if (First == NULL)
    {
        cout << "LinkList is emty" << endl;
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
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyLinearLL :: DeleteAtPos(int iPos)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    int i = 0;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position" << endl;
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
        temp = First;

        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete(temp->next);
       
        iCount--;
        
    }
  
}

int main()
{
    DoublyLinearLL *obj = new DoublyLinearLL();
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    obj->InsertLast(101);
    obj->InsertLast(121);
    obj->InsertLast(151);

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    obj->InsertAtPos(30, 3);

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    obj->DeleteFirst();

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    obj->DeleteLast();

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    obj->DeleteAtPos(3);

    obj->Display();
    iRet = obj->Count();

    cout << "Number of nodes: " << iRet << endl;

    return 0;
}