# include <iostream>
using namespace std;

void HarshadNum(int iNum)
{
    int iSum = 0;
    int oriNum = iNum;

    while(iNum > 0)
    {
        iSum += iNum%10;
        iNum /= 10;
    }

    if(oriNum % iSum == 0)
    {
        cout << "Harshad Number" << endl;
    }
    else
    {
        cout << "Not a Harshad number" << endl;
    }
}

int main()
{
    int Num = 0;

    cout << "Enter the number: " << endl;
    cin >> Num;

    HarshadNum(Num);

    return 0;
}