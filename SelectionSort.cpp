# include <iostream>
using namespace std;

void SelectionSort(int Arr[], int iSize)
{
    int temp, i = 0, j = 0, min_index = 0;

    for ( i = 0; i < iSize-1; i++)
    {
        min_index = i;

        for ( j = i+1; j < iSize; j++)
        {
            if (Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
            
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
        
    }
    

}

int main()
{
    int iLength = 0, i = 0;
    int *Brr = NULL;

    cout << "Enter the number of element you want to store: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter elements: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    SelectionSort(Brr, iLength);

    cout << "Array after sorting: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cout << Brr[i] << "\t";
    }
    
    delete []Brr;

    return 0;
}