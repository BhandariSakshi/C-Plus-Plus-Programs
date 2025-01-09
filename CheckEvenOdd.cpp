# include <iostream>
using namespace std;

bool Check(int iNo)
{
    bool bFlag = false;

    if (iNo % 2 == 0)
    {
        bFlag = true;
    }

    return bFlag;
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    bRet = Check(iValue);

    if (bRet == true)
    {
        cout << "It is an even number" << endl;
    }
    else
    {
        cout << "It is an odd number" << endl;
    }
    

    return 0;
}