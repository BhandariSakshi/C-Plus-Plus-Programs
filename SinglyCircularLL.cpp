# include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

class SinglyCLL
{
    private:
        struct node* First;
        struct node* Last;
        int iCount;

    public:
        SinglyCLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCLL :: SinglyCLL()
{
    cout << "Inside Constructor" << endl;
    First = NULL;
    Last = NULL;
    iCount = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of nodes in Linked List
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int SinglyCLL :: Count()
{
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: Display()
{
     if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    
    do
    {
        cout << "| " << First->data << " |->";
        First = First->next;

    } while (First != Last->next);
    cout << endl;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: InsertFirst(int No)
{
    struct node* newn = NULL;
    newn = new node;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;

    iCount++;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: InsertLast(int No)
{
    struct node* newn = NULL;
    newn = new node;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;
    iCount++;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: InsertAtPos(int No, int iPos)
{
    struct node* newn = NULL;
    struct node* temp = NULL;
    int i = 0;

    if ((iPos < 1) || (iPos > iCount+1))
    {
        cout << "Invalid position" << endl;
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

        temp = First;
        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        Last->next = First;
        
        iCount++;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteFirst
// Discription  : Used to delete node at First position of Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: DeleteFirst()
{
    if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    if (First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete(Last->next);
        Last->next = First;
    }
    iCount--; 
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteLast
// Discription  : Used to delete node at last position of Linked List
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 30/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: DeleteLast()
{
    struct node* temp = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    if (First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        temp = First;

        while (temp->next != Last)
        {
            temp = temp->next;
        }
        delete(Last);
        Last = temp;

        Last->next = First; 
    }
    iCount--; 
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SinglyCLL :: DeleteAtPos(int iPos)
{
    struct node* temp = NULL;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "invalid Position" << endl;
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

        for (int i = 1; i < iPos-1; i++)
        {
           temp = temp->next;
        }
        temp->next = temp->next->next;

        iCount--;
      
    }
   
}

int main()
{
    SinglyCLL *obj = new SinglyCLL();
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