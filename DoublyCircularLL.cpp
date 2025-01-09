#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

class DoublyCLL
{
private:
    struct node *First;
    struct node *Last;
    int iCount;

public:
    DoublyCLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyCLL ::DoublyCLL()
{
    cout << "Object of LinkList created successfully" << endl;
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
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DoublyCLL ::Count()
{
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL ::Display()
{
    struct node *temp = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LInkList is empty" << endl;
        return;
    }
    temp = First;
    cout << "<=>";
    do
    {
        cout << "| " << temp->data << " |<=>";
        temp = temp->next;

    } while (temp != Last->next);

    cout << endl;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL ::InsertFirst(int No)
{
    struct node *newn = NULL;
    newn = new node;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL ::InsertLast(int No)
{
    struct node *newn = NULL;

    newn = new node;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL ::InsertAtPos(int No, int iPos)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position" << endl;
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
        newn->prev = NULL;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
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
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL :: DeleteFirst()
{
    struct node* temp = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    else if (First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        temp = First;
        First = First->next;
        delete(temp);

        Last->next = First;
        First->prev = Last;

        iCount--;        
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteLast
// Discription  : Used to delete node at last position of Linked List
// Input        : PPNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL :: DeleteLast()
{

    if ((First == NULL) && (Last == NULL))
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    else if (First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
       Last = Last->prev;

        Last->next = First;
        First->prev = Last;

        iCount--;        
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DoublyCLL :: DeleteAtPos(int iPos)
{

 struct node *newn = NULL;
    struct node *temp = NULL;

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


        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

       temp->next = temp->next->next;

        iCount--;
    }
}


int main()
{
    DoublyCLL *obj = new DoublyCLL();
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    obj->InsertLast(101);
    obj->InsertLast(121);
    obj->InsertLast(151);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    obj->InsertAtPos(31, 3);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

     obj->DeleteFirst();

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

     obj->DeleteLast();

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

     obj->DeleteAtPos(3);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    return 0;
}