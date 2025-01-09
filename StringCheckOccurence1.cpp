# include <iostream>
using namespace std;

class Strings
{
    public:
        bool CheckOccurrence(char *Str);
};

bool Strings :: CheckOccurrence(char *Str)
{
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == 'w' || *Str == 'W')
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
    bool bRet = false;

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 50);

    Strings *obj = new Strings();

    bRet = obj->CheckOccurrence(Arr);

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