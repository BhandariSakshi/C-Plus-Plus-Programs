# include <iostream>
using namespace std;

class Matrix{

    private:
        int **Arr;
        int Row, Col;
    
        public:
            Matrix(int iRow, int iCol);
            ~Matrix();
            void Accept();
            bool CheckIdentity(Matrix *obj2);
};

Matrix :: Matrix(int iRow, int iCol)
{
    Row = iRow;
    Col = iCol;

    Arr = new int*[iRow];

    for(int i = 0; i < iRow; i++)
    {
        Arr[i] = new int[iCol];
    }
}

Matrix :: ~Matrix()
{
    for (int i = 0; i < Row; i++)
    {
        delete []Arr[i];
    }
    delete []Arr;
}

void Matrix :: Accept()
{
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            cin >> Arr[i][j];
        }
        cout << endl;
    }
}

bool Matrix :: CheckIdentity(Matrix *obj2)
{
    if(Row != obj2->Row || Col != obj2->Col)
    {
        return false;
    }
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            if(Arr[i][j] != obj2->Arr[i][j])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the number of coloumns: " << endl;
    cin >> iCol;

    Matrix *obj1 = new Matrix(iRow, iCol);
    Matrix *obj2 = new Matrix(iRow, iCol);

    cout << "Enter the first matrix: " << endl;
    obj1->Accept();

    cout << "Enter the second matrx: " << endl;
    obj2->Accept();

    if(obj1->CheckIdentity(obj2))
    {
        cout << "Matrix is identical" << endl;
    }
    else
    {
        cout << "Matrix is not identical" << endl;
    }

    return 0;
}