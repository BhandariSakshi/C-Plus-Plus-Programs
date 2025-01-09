# include <iostream>
using namespace std;

void BubbleSortEfficient(int Arr[], int iSize)
{
    int temp, i = 0, j = 0;
    bool bFlag = true;

    for ( i = 0; i < iSize-1 && bFlag == true; i++)
    {
        bFlag = false;

        for ( j = 0; j < iSize-1-i; j++)
        {
            if (Arr[j] > Arr[j+1])
            {
               temp = Arr[j];
               Arr[j] = Arr[j+1];
               Arr[j+1] = temp;
            }
            bFlag = true;
            
        }
        
    }
    

}

int main()
{
    int iLength = 0, i = 0;
    int *Brr = NULL;

    cout << "Enter the number of elements that you want to store: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter elements: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    BubbleSortEfficient(Brr, iLength);

    cout << "Array after sorting: " << endl;
    for ( i = 0; i < iLength; i++)
    {
        cout << Brr[i] << "\t";
    }
    
    delete []Brr;



    return 0;
}