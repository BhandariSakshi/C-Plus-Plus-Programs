# include <iostream>
using namespace std;

class String
{
    public:
        int StrLenX(char *Str);
        int StrLenF(char *Str);

};

int String :: StrLenX(char *Str)
{
    int iCount = 0;

    while (*Str != 0)
    {
        iCount++;
        Str++;
    }
    return iCount;
    
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "Enter the String: " << endl;
    cin.getline(Arr,50);

    String *obj = new String();

    iRet = obj->StrLenX(Arr);
    cout << "Length of the string is: " << iRet << endl;

    return 0;
}