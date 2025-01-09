# include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

class Queue
{
    private: 
        struct node* First;
        int iCount;

    public:

        Queue();

        void Display();
        int Count();

        void Enqueue(int No);
        int Dequeue();
    
};

Queue :: Queue()
{
    cout << "Object of queue got successfully created" << endl;
    First = NULL;
    iCount = 0;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of elements in Queue
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Queue :: Count()
{
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Queue
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Queue :: Display()
{
    struct node* temp = NULL;

    cout << "Elements in the queue are: " << endl;
    temp = First;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }  
    cout << endl;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Enqueue
// Discription  : Used to insert the node in Queue
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Queue :: Enqueue(int No)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    newn = new node;

    newn->data = No;
    newn->next = NULL;

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
    }
    iCount++;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Dequeue
// Discription  : Used to delete node from the Queue
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Queue :: Dequeue()
{
    int iValue = 0;
    struct node* temp = NULL;
    

    if (First == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else if (First->next == NULL)
    {
        First = NULL;
    }
    else
    {
        temp = First;
        iValue = First->data;
        First = First->next;
        free(temp);
    }
    iCount--;
   return iValue; 
}

int main()
{
    Queue *obj = new Queue();
    int iRet = 0;

    obj->Enqueue(111);
    obj->Enqueue(101);
    obj->Enqueue(51);
    obj->Enqueue(21);
    obj->Enqueue(11);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    iRet = obj->Dequeue();
    cout << "Dequeued element is: " <<  iRet <<endl;

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    return 0;
}