# include <iostream>
using namespace std;

class CheckPrime
{
    public:
        bool Check(int iNo);
};

bool CheckPrime :: Check(int iNo)
{
    int iCount = 0;

    for (int i = 2; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iCount++;
            break;
        }
        
    }
    if (iCount == 0)
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
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    CheckPrime *obj = new CheckPrime();

    bRet = obj->Check(iValue);

    if (bRet == true)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }
    
    return 0;
}