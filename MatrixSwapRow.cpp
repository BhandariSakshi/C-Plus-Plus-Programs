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
    void Display();
    void SwapRow();

};

Matrix :: Matrix(int Row, int Col)
{
    Rows = Row;
    Cols = Col;

    Arr = new int*[Row];

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

void Matrix :: Display()
{
    cout << "Matrix is: " << endl;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
    
}

void Matrix :: SwapRow()
{
    int temp = 0;

    for (int i = 0; i < Rows-1; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp;
        }
        
    }
    
}
int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the number of column: " << endl;
    cin >> iCol;

    Matrix obj = Matrix(iRow, iCol);

    obj.Accept();
    obj.SwapRow();
    obj.Display();


    return 0;
}