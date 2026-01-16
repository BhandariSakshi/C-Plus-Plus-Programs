# include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class LL{
    private:
        int iCount = 0;
        struct node *First = NULL; 
    
    public:
        int Count();
        void Display();
        void Insert(int iNo);
        void Reverse();
};

int LL :: Count()
{
    return iCount;
}

void LL :: Display()
{
    struct node *temp = NULL;
    temp = First;

    while(temp != NULL)
    {
        cout << "| " << temp->data << " |->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void LL :: Insert(int iNo)
{
    struct node *newn = NULL;
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

//11->21->51
//51->21->11
void LL :: Reverse()
{
    struct node *prev = NULL;
    struct node *temp = First;
    struct node *nextNode = NULL;

    while(temp != NULL)
    {
        nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }
    First = prev;
}

int main()
{

    LL *obj = new LL();

    obj->Insert(51);
    obj->Insert(21);
    obj->Insert(11);

    obj->Display();

    obj->Reverse();
    obj->Display();

    return 0;
}