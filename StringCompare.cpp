# include <iostream>
using namespace std;

class StringX
{
    public:
        bool StrCmpX(char *First, char *Second);
};

bool StringX :: StrCmpX(char *First, char *Second)
{
    while (*First != '\0' && *Second != '\0')
    {
        if (*First != *Second)
        {
            break;;
        }
        First++;
        Second++;
    }
    if (*First == '\0' && *Second == '\0')
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
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout << "Enter the first string: " << endl;
    cin.getline(Arr, 30);

    cout << "Enter the second string: " << endl;
    cin.getline(Brr, 30);

    StringX *obj = new StringX();

    bRet = obj->StrCmpX(Arr, Brr);

    if (bRet == true)
    {
        cout << "Strings are identical" << endl;
    }
    else
    {
        cout << "Strings are not identical" << endl;
    }
    
    
    return 0;
}