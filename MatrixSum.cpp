# include <iostream>
using namespace std;

class Matrix
{
    private: 
    int **Arr = NULL;
    int Rows, Cols;

    public:
    Matrix(int Row, int Col);
    ~Matrix();
    int Accept();
    int Summation();
};

Matrix :: Matrix(int Row, int Col)
{
    Rows = Row;
    Cols = Col;

    Arr = new int *[Row];
    for (int i = 0; i < Row; i++)
    {
        Arr[i] = new int[Col];
    }
    
}

Matrix :: ~Matrix()
{
    for (int i = 0; i < Rows; i++)
    {
        delete [] Arr[i];
    }
    delete[] Arr;
}

int Matrix :: Accept()
{
    cout << "Enter elements: " << endl;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cin >> Arr[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}

int Matrix :: Summation()
{
    int iSum = 0;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            iSum += Arr[i][j];
        }
        
    }
    return iSum;
}

int main()
{
    int iRow = 0, iCol = 0, iRet = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the number of columns: " << endl;
    cin >> iCol;

    Matrix obj(iRow, iCol);

    obj.Accept();
    iRet = obj.Summation();

    cout << "Summation of matrix elements is: " << iRet << endl;

    return 0;
}