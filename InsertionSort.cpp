# include <iostream>
using namespace std;

void InsertionSort(int Arr[], int iSize)
{
    int Selected, i = 0, j = 0;

    for (i = 0; i < iSize; i++)
    {
       
        for (j = i-1, Selected = Arr[i]; (j >= 0) && (Arr[j] > Selected); j--)
        {
           Arr[j+1] = Arr[j];
        }
        Arr[j+1] = Selected;
    }
}

int main()
{
    int iLength = 0, i = 0;
    int *Brr = NULL;

    cout << "Enter the number of element that you want to store: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter the elements: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    InsertionSort(Brr, iLength);

    cout << "Array after sorting: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cout << Brr[i] << "\t";
    }
    
    delete []Brr;

    return 0;

    
}