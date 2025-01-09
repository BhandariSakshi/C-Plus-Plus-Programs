# include <iostream>
using namespace std;

void BubbleSort(int Arr[], int iSize)
{
    int temp, i = 0, j = 0;

    for (i = 0; i < iSize - 1; i++)
    {
        for (j = 0; j < iSize - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int iLength = 0, i = 0, j = 0;
    int *Brr = NULL;

    cout << "Enter the number of element that you want to search: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter the elements: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    BubbleSort(Brr, iLength);

    cout << "Array after sorting: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cout << Brr[i] << "\t";
    }
    
    

    return 0;
}

