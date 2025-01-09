# include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

class Stack
{
private:
    struct node* First;
    int iCount = 0;
    
public:
    Stack();
    
    void Display();
    int Count();

    void Push(int No);
    int Pop();

};

Stack::Stack()
{
    cout << "Object of stack got created successfully" << endl;
    First = NULL;
    iCount = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of elements in Stack
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Stack :: Count()
{
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Stack
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Stack :: Display()
{
    struct node* temp = NULL;
    cout << "Elements in the stack are: " << endl;

    temp = First;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Pop
// Discription  : Used to delete node from the Stack
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Stack :: Pop()
{
    int iValue = 0;
    struct node* temp = NULL;

    if (First == NULL)
    {
        cout << "UNable to pop the element as stack is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;

        iCount--;
    }
    return iValue;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Push
// Discription  : Used to insert the node in Stack
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Stack :: Push(int No)
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
        First = newn;
    }
    iCount++;    
}



int main()
{
    Stack *obj = new Stack();
    int iRet = 0;

    obj->Push(11);
    obj->Push(21);
    obj->Push(51);
    obj->Push(101);
    obj->Push(111);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements in the stack are: " << iRet << endl;

    iRet = obj->Pop();
    cout << "Poped element is: " << iRet << endl;

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements in the stack are: " << iRet << endl;


    return 0;
}
