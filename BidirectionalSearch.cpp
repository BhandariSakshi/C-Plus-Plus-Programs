#include <iostream>
using namespace std;

bool BidirectionalSearch(int Arr[], int iSize, int Value)
{
    int iStart = 0, iEnd = 0;
    bool bFlag = false;

    for (iStart = 0, iEnd = iSize - 1; iStart <= iEnd; iStart++, iEnd--)
    {
        if (Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, i = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    cout << "Enter the number of element you want to store: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter elements: " << endl;
    for (i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    cout << "Enter the element you want to search: " << endl;
    cin >> iValue;

    bRet = BidirectionalSearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        cout << iValue << " is present" << endl;
    }
    else
    {
        cout << iValue << " is not present" << endl;
    }

    delete[] Brr;

    return 0;
}