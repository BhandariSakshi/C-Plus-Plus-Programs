# include <iostream>
using namespace std;

class Strings
{
    public:
        int CheckLastOcc(char Str[], char ch);
};

int Strings :: CheckLastOcc(char Str[], char ch)
{
    int iPos = -1, iCount = 1;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            iPos = iCount;
        }
        iCount++;
        Str++;
    }
    return iPos;
}

int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 50);

    cout << "Enter the charecter: " << endl;
    cin >> cValue;

    Strings *obj = new Strings();

    iRet = obj->CheckLastOcc(Arr, cValue);

    if (iRet != -1)
    {
        cout << "The Last occurrence of charecter is: " << iRet << endl;
    }
    else
    {
        cout << "No such charecter present." << endl;
    }

    return 0;
}