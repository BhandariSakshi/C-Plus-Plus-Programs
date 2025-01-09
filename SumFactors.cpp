# include <iostream>
using namespace std;

class SumFactors
{
    public:
        int Sum(int iNo);
};

int SumFactors :: Sum(int iNo)
{
    int iSum = 0, i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iSum += i;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    SumFactors *obj = new SumFactors();

    iRet = obj->Sum(iValue);

    cout << "Sum of factors: " << iRet << endl;

    return 0;

}