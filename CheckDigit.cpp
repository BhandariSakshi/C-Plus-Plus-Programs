# include <iostream>
using namespace std;

bool CheckDigit(char cValue)
{
    if ((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout << "Enter the digit: " << endl;
    cin >> ch;

    bRet = CheckDigit(ch);

    if (bRet == true)
    {
        cout << "It is a Digit" << endl;
    }
    else
    {
        cout << "It is not a digit" << endl;
    }
    
    return 0;
}