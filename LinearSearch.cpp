# include <iostream>
using namespace std;

bool LinearSearch(int Arr[], int iSize, int Value)
{
    bool bFlag = false;
    int i = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (Arr[i] == Value)
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
    bool bRet = 0;

    cout << "Enter the number of element you want to store:" << endl;
    cin >> iLength;

    Brr = new int[iLength];

    cout << "Enter Elements:" << endl;
    for ( i = 0; i < iLength; i++)
    {
        cin >> Brr[i];
    }

    cout << "Enter the element that you want to search:" << endl;
    cin >> iValue;

    bRet = LinearSearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        cout << iValue << " is present" << endl;
    }
    else
    {
        cout << iValue << " is not present" << endl;
    }
    
    delete []Brr;

    return 0;
}