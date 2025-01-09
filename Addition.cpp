#include <iostream>
using namespace std;

class Addition
{
public:
    int Add(int iNo1, int iNo2);
};

int Addition ::Add(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;
}

int main()
{
    Addition *obj = new Addition();
    int iRet = 0;

    iRet = obj->Add(10, 20);

    cout << "Addition is: " << iRet << endl;

    return 0;
}
