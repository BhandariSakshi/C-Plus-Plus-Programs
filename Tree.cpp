#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

class Tree
{
private:
    struct node *Root;
    void InorderTraversal(node *root);
    void PreorderTraversal(node *root);
    void PostorderTraversal(node *root);
    int CountLeaf(node *root);
    int CountParent(node *root);
    int CountAll(node *root);

public:
    Tree();

    void Insert(int No);
    void Search(int Value);

    void Inorder();
    void Preorder();
    void Postorder();

    int CountLeaf();
    int CountParent();
    int CountAll();
};

Tree ::Tree()
{
    cout << "Inside Contructor" << endl;
    Root = NULL;
}

void Tree ::Insert(int No)
{
    struct node *newn = new node;
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (Root == NULL)
    {
        Root = newn;
    }
    else
    {
        struct node *temp = Root;
        while (true)
        {
            if (temp->data == No)
            {
                cout << "Unable to insert node as element is already present\n";
                delete newn;
                break;
            }
            else if (No > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

void Tree ::Inorder()
{
    InorderTraversal(Root);
}

void Tree ::InorderTraversal(node *root)
{
    if (root != NULL)
    {
        InorderTraversal(root->lchild);
        cout << root->data << "\t";
        InorderTraversal(root->rchild);
    }
}

void Tree ::Preorder()
{
    PreorderTraversal(Root);
}

void Tree ::PreorderTraversal(node *root)
{
    if (root != NULL)
    {
        cout << root->data << "\t";
        PreorderTraversal(root->lchild);
        PreorderTraversal(root->rchild);
    }
}

void Tree ::Postorder()
{
    PostorderTraversal(Root);
}

void Tree ::PostorderTraversal(node *root)
{
    if (root != NULL)
    {
        PostorderTraversal(root->lchild);
        PostorderTraversal(root->rchild);
        cout << root->data << "\t";
    }
}

int Tree ::CountLeaf()
{
    CountLeaf(Root);
}

int Tree ::CountLeaf(node *root)
{
    static int Leaf;
    if (root != NULL)
    {
        if (root->rchild == NULL && root->lchild == NULL)
        {
            Leaf++;
        }
        CountLeaf(root->rchild);
        CountLeaf(root->lchild);
    }
    return Leaf;
}

int Tree ::CountParent()
{
    CountParent(Root);
}

int Tree ::CountParent(node *root)
{
    static int Parent;
    if (root != NULL)
    {
        if (root->rchild != NULL && root->lchild != NULL)
        {
            Parent++;
        }
        CountLeaf(root->rchild);
        CountLeaf(root->lchild);
    }
    return Parent;
}

int Tree ::CountAll()
{
    CountAll(Root);
}

int Tree ::CountAll(node *root)
{
    static int Leaf;

    if (root != NULL)
    {
        Leaf++;
        CountAll(root->rchild);
        CountAll(root->lchild);
    }
    return Leaf;
}

void Tree ::Search(int Value)
{
    bool bFlag = false;

    if (Root == NULL)
    {
        cout << "Tree is empty" << endl;
    }
    while (Root != NULL)
    {
        if (Root->data == Value)
        {
            bFlag = true;
            break;
        }
        else if (Value > Root->data)
        {
            Root = Root->rchild;
        }
        else if (Value < Root->data)
        {
            Root = Root->lchild;
        }
    }

    if (bFlag == true)
    {
        cout << Value << " is present" << endl;
    }
    else
    {
        cout << Value << " is not present" << endl;
    }
}

int main()
{
    Tree *obj = new Tree();
    int iRet = 0;

    obj->Insert(52);
    obj->Insert(12);
    obj->Insert(62);
    obj->Insert(82);
    obj->Insert(10);
    obj->Insert(5);

    cout << "Inorder traversal: " << endl;
    obj->Inorder();

    cout << "\nPreorder traversal: " << endl;
    obj->Preorder();

    cout << "\nPostorder traversal: " << endl;
    obj->Postorder();

    iRet = obj->CountLeaf();
    cout << "\nTotal leaf nodes are: " << iRet << endl;

    iRet = obj->CountParent();
    cout << "\nTotal parent nodes are: " << iRet << endl;

    iRet = obj->CountAll();
    cout << "\nTotal nodes are: " << iRet << endl;

    obj->Search(5);

    return 0;
}
