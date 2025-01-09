# include <iostream>
using namespace std;

int Sum(int ptr[], int iSize)
{
    int iSum = 0, i = 0;

    for ( i = 0; i < iSize; i++)
    {
        iSum += ptr[i];
    }
    return iSum;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    cout << "Enter the number or element you want to store: " << endl;
    cin >> iCount;

    Arr = new int[iCount];

    cout << "Enter the elements: " << endl;
    for ( i = 0; i < iCount; i++)
    {
        cin >> Arr[i];
    }

    iRet = Sum(Arr, iCount);

    cout << "Sum is: " << iRet << endl;

    delete []Arr;

    return 0;
    
}
