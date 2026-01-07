# include <iostream>
using namespace std;

class Matrix{

    private:
        int iRow = 0, iCol = 0;
        int **Mat = NULL;

    public:
        Matrix(int row, int col)
        {
            iRow = row;
            iCol = col;

            Mat = new int*[row];

            for(int i = 0; i < row; i++)
            {
                Mat[i] = new int[col];
            }
        }

        ~Matrix()
        {
            for(int i = 0; i < iRow; i++)
            {
                delete []Mat[i];
            }

            delete []Mat;
        }

        void Accept()
        {
            cout << "Enter the elements: " << endl;

            for(int i = 0; i < iRow; i++)
            {
                for(int j = 0; j < iCol; j++)
                {
                    cin >> Mat[i][j];
                }
                cout << endl;
            }
            cout << endl;
        }

        // 1   2   3   4

        // 5   6   7   8

        // 9   10 11 12

        // 13 14 15 16

        // 17 18 19 20

        // 1  2  3  4  8  12  16  20  19  18  17  13  9  5  6  7  11  15  12  14 10  

        void SpiralDisplay()
        {
            int top = 0;
            int bottom = iRow - 1;
            int left = 0;
            int right = iCol - 1;

            while (top <= bottom && left <= right)
            {
                // Left → Right
                for (int i = left; i <= right; i++)
                    cout << Mat[top][i] << "\t";
                top++;

                // Top → Bottom
                for (int i = top; i <= bottom; i++)
                    cout << Mat[i][right] << "\t";
                right--;

                // Right → Left
                if (top <= bottom)
                {
                    for (int i = right; i >= left; i--)
                        cout << Mat[bottom][i] << "\t";
                    bottom--;
                }

                // Bottom → Top
                if (left <= right)
                {
                    for (int i = bottom; i >= top; i--)
                        cout << Mat[i][left] << "\t";
                    left++;
                }
            }
        }

};

int main()
{
    int row = 0, col = 0;
    
    printf("Enter the number of row: \n");
    scanf("%d", &row);

    printf("Enter the number of column: \n");
    scanf("%d", &col);

    Matrix mobj = Matrix(row, col);

    mobj.Accept();
    mobj.SpiralDisplay();

    return 0;
}