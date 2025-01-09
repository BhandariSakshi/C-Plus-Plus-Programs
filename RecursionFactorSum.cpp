# include <iostream>
using namespace std;

class Recursion
{
    public: 
        int Sum(int iNo);
};

int Recursion :: Sum(int iNo)
{
    static int i = 1;
    static int iSum = 0;
    
    if (i <= (iNo/2))
    {
        if (iNo % i == 0)
        {
           iSum = iSum + i;
        }
        i++;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Recursion *obj = new Recursion();

    iRet = obj->Sum(iValue);
    cout << "Sum of factors: " << iRet << endl;

    return 0;
}