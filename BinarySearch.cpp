# include <iostream>
using namespace std;

bool BinarySearch(int Arr[], int iSize,  int Value)
{
    bool bFlag = false;
    int i = 0, iStart = 0, iEnd = iSize-1, iMid = 0;

    while (iStart <= iEnd)
    {
        iMid = iStart + (iEnd-iStart)/2;

        if (Arr[iStart] == Value || Arr[iEnd] == Value || Arr[iMid] == Value)
        {
            bFlag = true;
            break;
        }
        else if (Value > iMid)
        {
            iEnd = iMid - 1;
        }
        else if (Value < iMid)
        {
            iStart = iMid + 1;
        }
    }
    
    return bFlag;

}

int main()
{
    int iLength = 0, i = 0, iValue;
    int *Brr = NULL;
    bool bRet = false;

    cout << "Enter the number of element that you want to search: " << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter elements: " << endl;

    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    cout << "Enter the element that you want to search: " << endl;
    cin >> iValue;

    bRet = BinarySearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        cout << iValue << " is present" << endl;
    }
    else
    {
        cout << iValue << " is not present" << endl;
    }
    
    
}