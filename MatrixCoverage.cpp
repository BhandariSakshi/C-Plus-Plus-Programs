#include <iostream>
using namespace std;

class Matrix
{
private:
    int **Arr;
    int Rows;
    int Cols;

public:
    Matrix(int Row, int Col);
    ~Matrix();
    void Accept();
    int Coverage();
};

Matrix::Matrix(int Row, int Col)
{
    Rows = Row;
    Cols = Col;

    Arr = new int *[Rows];

    for (int i = 0; i < Rows; i++)
    {
        Arr[i] = new int[Cols];
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < Rows; i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;
}

void Matrix::Accept()
{
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cin >> Arr[i][j];
        }
    }
}

int Matrix::Coverage()
{
    int iAns = 0;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] == 0)
            {
                if (i > 0 && Arr[i - 1][j] == 1)  // Up
                {
                    iAns++;
                }
                if (i < Rows - 1 && Arr[i + 1][j] == 1) // Down (Fixed)
                {
                    iAns++;
                }
                if (j > 0 && Arr[i][j - 1] == 1) // Left
                {
                    iAns++;
                }
                if (j < Cols - 1 && Arr[i][j + 1] == 1) // Right
                {
                    iAns++;
                }
            }
        }
    }
    return iAns;
}

int main()
{
    int iRow = 0, iCol = 0, iRet = 0;

    cout << "Enter the number of rows: ";
    cin >> iRow;

    cout << "Enter the number of columns: ";
    cin >> iCol;

    Matrix obj(iRow, iCol);

    obj.Accept();
    iRet = obj.Coverage();

    cout << "Coverage: " << iRet << endl;

    return 0;
}
