# include <iostream>
using namespace std;

class Matrix
{
    private:
    int **Arr = NULL;
    int Rows = 0, Cols = 0;

    public:
    Matrix(int Row, int Col);
    ~Matrix();
    void Accept();
    int Minimum();
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
        delete []Arr[i];
    }
    delete []Arr;
}

void Matrix :: Accept()
{
    cout << "Enter the elements: " << endl;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cin >> Arr[i][j];
        }
        cout << endl;
    }
    
}

int Matrix :: Minimum()
{
    int iMin = Arr[0][0];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (iMin > Arr[i][j])
            {
                iMin = Arr[i][j];
            }
            
        }
    }
    return iMin;
}


int main()
{
    int iRow = 0, iCol = 0, iRet = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the number of columns: " << endl;
    cin >> iCol;

    Matrix obj = Matrix(iRow, iCol);

    obj.Accept();
    iRet = obj.Minimum();
    cout << "Minimum element in the matrix is: " << iRet << endl;


    return 0;
}