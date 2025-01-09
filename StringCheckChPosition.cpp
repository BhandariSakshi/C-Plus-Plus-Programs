# include <iostream>
using namespace std;

class Strings
{
    public: 
        int CheckPosition(char *Str, char ch);
};

int Strings :: CheckPosition(char *Str, char ch)
{
    int iCount = 1;
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            bFlag = true;
            break;
        }
        iCount++;
        Str++;
    }
    
    if (bFlag == true)
    {
        return iCount;
    }
    else
    {
        return -1;
    }
}


int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr,50);

    cout << "Enter the charecter: " << endl;
    cin >> cValue;

    Strings obj = Strings();

    iRet = obj.CheckPosition(Arr, cValue);

    if (iRet == -1)
    {
        cout << "Chareceter not found" << endl;
    }
    else
    {
        cout << "Position of charecter is: " << iRet << endl;
    }
    
    return 0;
}