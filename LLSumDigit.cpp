# include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

class LL
{
    private:
    struct node* First = NULL;
    int iCount = 0;

    public:
    int Count();
    void Display();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void SumDigit();
};

int LL :: Count()
{
    return iCount;
}

void LL :: Display()
{
    struct node* temp = First;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void LL :: InsertFirst(int iNo)
{
    struct node* newn = NULL;

    newn = new node;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
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

void LL :: InsertLast(int iNo)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    newn = new node;

    newn->data = iNo;
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
        temp = newn;
        
    }
    iCount++;
}

void LL :: InsertAtPos(int iNo,int iPos)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    int iLength = Count();

    if(iPos < 1 || iPos > iLength+1)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iLength+1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new node;

        newn->data = iNo;
        newn->next = NULL;

        temp = First;
        for (int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        iCount++;     
    }
    
}

void LL :: DeleteFirst()
{
    struct node* temp = NULL;

    if(First == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else if (First ->next == NULL)
    {
        delete (First->next);
        First = NULL;
    }
    else
    {
        temp = First;
        First = First -> next;
        delete temp;
    }
    iCount--;
}

void LL :: DeleteLast()
{
    struct node* temp = NULL;

    if(First == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else if (First->next == NULL)
    {
        delete (First->next);
        First = NULL;
    }
    else
    {
        temp = First;
       while (temp->next->next != NULL)
       {
        temp = temp->next;
       }
       delete (temp->next);
       temp->next = NULL;
       
    }
    iCount--;
}

void LL :: DeleteAtPos(int iPos)
{
    struct node* temp1 = NULL;
    struct node* temp2 = NULL;

    int iLength = Count();

    if ((iPos < 1) || (iPos > iLength))
    {
        cout << "Invalid position" << endl;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iLength)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for (int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);

        iCount--;


    }
   
}

void LL :: SumDigit()
{
    int iSum = 0, iNo = 0, iDigit = 0;

    while(First != NULL)
    {
           iNo = First->data;
            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            cout << "Sum of " << First->data << " is " << iSum  << endl;
            iSum = 0;

            First = First->next;
    }
}

int main()
{

    int iRet = 0, iResult = 0;

    LL *obj = new LL();

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    obj->InsertAtPos(39,3);

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

    obj->DeleteAtPos(2);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of elements are: " << iRet << endl;

    obj->SumDigit();


    return 0;
}