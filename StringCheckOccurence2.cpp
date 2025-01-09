# include <iostream>
using namespace std;

class Strings
{
    public:
        bool CheckOccurrence(char *Str, char ch);
};

bool Strings :: CheckOccurrence(char *Str, char ch)
{
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            bFlag = true;
            break;
        }
        Str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 50);

    cout << "Enter the charecter that you want to search: " << endl;
    cin >> cValue;

    Strings *obj = new Strings();

    bRet = obj->CheckOccurrence(Arr,cValue);

    if (bRet == true)
    {
        cout << "charecter is present" << endl;
    }
    else
    {
        cout << "Charecter is not present" << endl;
    }

    return 0;
}