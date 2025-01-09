# include <iostream>
using namespace std;

class Ticket
{
    public:
        int Amount(int iNo);

};

int Ticket :: Amount(int iNo)
{
    if (iNo <= 5)
    {
        return 0;
    }
    else if (iNo > 5 && iNo <= 18)
    {
        return 800;
    }
    else if (iNo > 18 && iNo <= 50)
    {
        return 1000;
    }
    else
    {
        return 500;
    }
    
    
    
    
}


int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter your age: " << endl;
    cin >> iValue;

    Ticket *obj = new Ticket();

    iRet = obj->Amount(iValue);

    cout << "Amount of your ticket is: " << iRet << endl;


    return 0;
}