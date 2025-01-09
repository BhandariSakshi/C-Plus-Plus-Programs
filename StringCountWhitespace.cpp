# include <iostream>
using namespace std;

class Strings
{
    public: 
        int CountSpaces(char *Str);
};

int Strings :: CountSpaces(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == ' ')
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 50);

    Strings *obj = new Strings();

    iRet = obj->CountSpaces(Arr);
    cout << "Number of whitespaces are: " << iRet << endl;

    return 0;
}