# include <iostream>
using namespace std;

class CountFactors
{
    public:
        int Count(int iNo);
};

int CountFactors :: Count(int iNo)
{
    int iCount = 0, i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iCount++;
        }
    }

    return iCount;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    CountFactors *obj = new CountFactors();

    iRet = obj->Count(iValue);

    cout << "Number of factors are: " << iRet << endl;

    return 0;


}
