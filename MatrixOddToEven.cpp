# include <iostream>
using namespace std;


class ArrayX
{
    private:
    int **Arr = NULL;
    int Rows = 0, Cols = 0;

    public:
    ArrayX(int Row, int Col);
    void Accept();
    void Display();
    void OddToEven();
};

ArrayX :: ArrayX(int Row, int Col)
{
    Rows = Row;
    Cols = Col;

    Arr = new int*[Row];

    for (int i = 0; i < Row; i++)
    {
        Arr[i] = new int[Col];
    }
    
}

void ArrayX :: Accept()
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

void ArrayX :: Display()
{
    cout << "Matrix is: " << endl;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << Arr[i][j];
        }
        cout << "\t" << endl;
    }
    
}

void ArrayX :: OddToEven()
{

    for (int i = 0; i < Rows; i++)
    {
       for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] % 2 == 1)
            {
                Arr[i][j]++;
            }
        }
    }
     
}

int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the numbers of columns: " << endl;
    cin >> iCol;

    ArrayX obj = ArrayX(iRow, iCol);

    obj.Accept();
    obj.OddToEven();
    obj.Display();

    return 0;
}