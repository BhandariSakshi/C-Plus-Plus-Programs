# include <iostream>
using namespace std;

class MatrixX
{
    private:
    int **Arr = NULL;
    int Rows = 0, Cols = 0;

    public:

    MatrixX(int Row, int Col)
    {
        Rows = Row, Cols = Col;

        Arr = new int*[Row];
        for (int i = 0; i < Row; i++)
        {
            Arr[i] = new int[Col];
        }
        
    }

    void Accept()
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

    void SumDigits()
    {
        int iDigit = 0, iSum = 0, iNo = 0;

        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Cols; j++)
            {
                iNo = Arr[i][j];

                while (iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                cout << iSum << "\t";
                iSum = 0;
            }
            cout << endl;
        }
        
    }
};

int main()
{
    int iRow = 0, iCol = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iRow;

    cout << "Enter the number of columns: " << endl;
    cin >> iCol;

    MatrixX obj = MatrixX(iRow, iCol);

    obj.Accept();
    obj.SumDigits();

    return 0;
}